#ifdef PRECOMPILEDHEADERS
	#include "TileEngine All.h"
#else
	#include "worlddef.h"
	#include "worlddat.h"
	#include <stdio.h>
	#include <string.h>
	#include "wcheck.h"
	#include "stdlib.h"
	#include "time.h"
	#include "video.h"
	#include "debug.h"
	#include "smooth.h"
	#include "worldman.h"
	#include "mousesystem.h"
	#include "sys globals.h"
	#include "tiledat.h"
	#include "Fileman.h"
#endif


TILE_IMAGERY				*gTileSurfaceArray[ NUMBEROFTILETYPES ];
UINT8								gbDefaultSurfaceUsed[ NUMBEROFTILETYPES ];
UINT8								gbSameAsDefaultSurfaceUsed[ NUMBEROFTILETYPES ];

TILE_IMAGERY *LoadTileSurface(  char * cFilename )
{
	// Add tile surface
	PTILE_IMAGERY  pTileSurf = NULL;	
	VOBJECT_DESC   VObjectDesc;
	HVOBJECT		   hVObject;
	HIMAGE				 hImage;
	SGPFILENAME						cStructureFilename;
	STR										cEndOfName;
	STRUCTURE_FILE_REF *	pStructureFileRef;
	BOOLEAN								fOk;


	hImage = CreateImage( cFilename, IMAGE_ALLDATA );
	if (hImage == NULL)
	{
		// Report error
		SET_ERROR( "Could not load tile file: %s", cFilename );
		return( NULL );
	}

	VObjectDesc.fCreateFlags = VOBJECT_CREATE_FROMHIMAGE;
	VObjectDesc.hImage = hImage;

	hVObject = CreateVideoObject( &VObjectDesc );

	if ( hVObject == NULL )
	{
		// Report error
		SET_ERROR( "Could not load tile file: %s", cFilename );
		// Video Object will set error conition.]
		DestroyImage( hImage );
		return( NULL );
	}

	// Load structure data, if any.
	// Start by hacking the image filename into that for the structure data
	strcpy( cStructureFilename, cFilename );
	cEndOfName = strchr( cStructureFilename, '.' );
	if (cEndOfName != NULL)
	{
		cEndOfName++;
		*cEndOfName = '\0';
	}
	else
	{
		strcat( cStructureFilename, "." );
	}
	strcat( cStructureFilename, STRUCTURE_FILE_EXTENSION );
	if (FileExists( cStructureFilename ))
	{
		pStructureFileRef = LoadStructureFile( cStructureFilename );
		if (pStructureFileRef == NULL || hVObject->usNumberOfObjects != pStructureFileRef->usNumberOfStructures)
		{
			DestroyImage( hImage );
			DeleteVideoObject( hVObject );
			SET_ERROR(  "Structure file error: %s", cStructureFilename );
			return( NULL );
		}
		
		DebugMsg( TOPIC_JA2, DBG_LEVEL_3, cStructureFilename );
	
		fOk = AddZStripInfoToVObject( hVObject, pStructureFileRef, FALSE, 0 );
		if (fOk == FALSE)
		{
			DestroyImage( hImage );
			DeleteVideoObject( hVObject );
			SET_ERROR(  "ZStrip creation error: %s", cStructureFilename );
			return( NULL );
		}
		
	}
	else
	{
		pStructureFileRef = NULL;
	}

	pTileSurf = (PTILE_IMAGERY) MemAlloc( sizeof( TILE_IMAGERY ) );

	// Set all values to zero
	memset( pTileSurf, 0, sizeof( TILE_IMAGERY ) );

	pTileSurf->vo									= hVObject;
	pTileSurf->pStructureFileRef	= pStructureFileRef;

	if (pStructureFileRef && pStructureFileRef->pAuxData != NULL)
	{
		pTileSurf->pAuxData = pStructureFileRef->pAuxData;
		pTileSurf->pTileLocData = pStructureFileRef->pTileLocData;
	}
	else if (hImage->uiAppDataSize == hVObject->usNumberOfObjects * sizeof( AuxObjectData ))
	{
		// Valid auxiliary data, so make a copy of it for TileSurf
		pTileSurf->pAuxData = (AuxObjectData *) MemAlloc( hImage->uiAppDataSize );
		if ( pTileSurf->pAuxData == NULL)
		{
			DestroyImage( hImage );
			DeleteVideoObject( hVObject );
			return( NULL );
		}
		memcpy( pTileSurf->pAuxData, hImage->pAppData, hImage->uiAppDataSize );
	}
	else
	{
		pTileSurf->pAuxData = NULL;
	}
	// the hImage is no longer needed
	DestroyImage( hImage );

  return( pTileSurf );
}


void DeleteTileSurface( PTILE_IMAGERY	pTileSurf )
{
	if ( pTileSurf->pStructureFileRef != NULL )
	{
		FreeStructureFile( pTileSurf->pStructureFileRef );
	}
	else
	{
		// If a structure file exists, it will free the auxdata.
		// Since there is no structure file in this instance, we
		// free it ourselves.
		if (pTileSurf->pAuxData != NULL)
		{
			MemFree( pTileSurf->pAuxData );
		}
	}

	DeleteVideoObject( pTileSurf->vo );
	MemFree( pTileSurf );
}


extern void GetRootName( INT8 *pDestStr, INT8 *pSrcStr );


void SetRaisedObjectFlag( char *cFilename, TILE_IMAGERY *pTileSurf )
{
	INT32 cnt = 0;
	CHAR8	cRootFile[ 128 ];
	UINT8 ubRaisedObjectFiles[][80] =
	{
		"bones",
		"bones2",
		"grass2",
		"grass3",
		"l_weed3",
		"litter",
		"miniweed",
		"sblast",
		"sweeds",
		"twigs",
		"wing",
		"1"
	};

	// Loop through array of RAISED objecttype imagery and
	// set global value...
	if ( ( pTileSurf->fType >= DEBRISWOOD && pTileSurf->fType <= DEBRISWEEDS ) || pTileSurf->fType == DEBRIS2MISC || pTileSurf->fType == ANOTHERDEBRIS )
	{
		GetRootName( (INT8 *)cRootFile, (INT8 *)cFilename );
		while( ubRaisedObjectFiles[ cnt ][ 0 ] != '1' )
		{
			if ( stricmp( ubRaisedObjectFiles[ cnt ], cRootFile ) == 0 )
			{		
				pTileSurf->bRaisedObjectType = TRUE;
			}

			cnt++;
		}
	}
}