#ifdef PRECOMPILEDHEADERS
	#include "Tactical All.h"
#else
	#include "sgp.h"
	#include "Map Screen Interface.h"
	#include "Overhead.h"
	#include "Debug Control.h"
	#include "expat.h"
	#include "XML.h"
#endif


struct
{
	PARSE_STAGE	curElement;

	CHAR8		szCharData[MAX_CHAR_DATA_LENGTH+1];
	SQUAD_NAMES		curSquadNames;
	SQUAD_NAMES *	curArray;
	UINT32			maxArraySize;

	UINT32			currentDepth;
	UINT32			maxReadDepth;
}
typedef squadnamesParseData;

static void XMLCALL
squadnamesStartElementHandle(void *userData, const XML_Char *name, const XML_Char **atts)
{
	squadnamesParseData * pData = (squadnamesParseData *)userData;

	if(pData->currentDepth <= pData->maxReadDepth) //are we reading this element?
	{
		if(strcmp(name, "SQUAD_NAMES") == 0 && pData->curElement == ELEMENT_NONE)
		{
			pData->curElement = ELEMENT_LIST;

			memset(pData->curArray,0,sizeof(SQUAD_NAMES)*pData->maxArraySize);

			pData->maxReadDepth++; //we are not skipping this element
		}
		else if(strcmp(name, "SQUADNAME") == 0 && pData->curElement == ELEMENT_LIST)
		{
			pData->curElement = ELEMENT;

			memset(&pData->curSquadNames,0,sizeof(SQUAD_NAMES));

			pData->maxReadDepth++; //we are not skipping this element
		}
		else if(pData->curElement == ELEMENT &&
				(strcmp(name, "uiIndex") == 0 ||
				strcmp(name, "Squad") == 0 ))
		{
			pData->curElement = ELEMENT_PROPERTY;

			pData->maxReadDepth++; //we are not skipping this element
		}

		pData->szCharData[0] = '\0';
	}

	pData->currentDepth++;

}

static void XMLCALL
squadnamesCharacterDataHandle(void *userData, const XML_Char *str, int len)
{
	squadnamesParseData * pData = (squadnamesParseData *)userData;

	if( (pData->currentDepth <= pData->maxReadDepth) &&
		(strlen(pData->szCharData) < MAX_CHAR_DATA_LENGTH)
	){
		strncat(pData->szCharData,str,__min((unsigned int)len,MAX_CHAR_DATA_LENGTH-strlen(pData->szCharData)));
	}
}


static void XMLCALL
squadnamesEndElementHandle(void *userData, const XML_Char *name)
{
	squadnamesParseData * pData = (squadnamesParseData *)userData;

	if(pData->currentDepth <= pData->maxReadDepth) //we're at the end of an element that we've been reading
	{
		if(strcmp(name, "SQUAD_NAMES") == 0)
		{
			pData->curElement = ELEMENT_NONE;
		}
		else if(strcmp(name, "SQUADNAME") == 0)
		{
			pData->curElement = ELEMENT_LIST;

			if(pData->curSquadNames.uiIndex < pData->maxArraySize)
			{
				pData->curArray[pData->curSquadNames.uiIndex] = pData->curSquadNames; //write the squadnames into the table
			}
		}
		else if(strcmp(name, "uiIndex") == 0)
		{
			pData->curElement = ELEMENT;
			pData->curSquadNames.uiIndex	= (UINT32) atol(pData->szCharData);
		}
		else if(strcmp(name, "Squad") == 0)
		{
			pData->curElement = ELEMENT;

			MultiByteToWideChar( CP_UTF8, 0, pData->szCharData, -1, pData->curSquadNames.squadname, sizeof(pData->curSquadNames.squadname)/sizeof(pData->curSquadNames.squadname[0]) );
			pData->curSquadNames.squadname[sizeof(pData->curSquadNames.squadname)/sizeof(pData->curSquadNames.squadname[0]) - 1] = '\0';
		}


		pData->maxReadDepth--;
	}

	pData->currentDepth--;
}




BOOLEAN ReadInSquadNamesStats(STR fileName)
{
	HWFILE		hFile;
	UINT32		uiBytesRead;
	UINT32		uiFSize;
	CHAR8 *		lpcBuffer;
	XML_Parser	parser = XML_ParserCreate(NULL);

	squadnamesParseData pData;

	DebugMsg(TOPIC_JA2, DBG_LEVEL_3, "Loading SquadNames.xml" );

	// Open squadnames file
	hFile = FileOpen( fileName, FILE_ACCESS_READ, FALSE );
	if ( !hFile )
		return( FALSE );

	uiFSize = FileGetSize(hFile);
	lpcBuffer = (CHAR8 *) MemAlloc(uiFSize+1);

	//Read in block
	if ( !FileRead( hFile, lpcBuffer, uiFSize, &uiBytesRead ) )
	{
		MemFree(lpcBuffer);
		return( FALSE );
	}

	lpcBuffer[uiFSize] = 0; //add a null terminator

	FileClose( hFile );


	XML_SetElementHandler(parser, squadnamesStartElementHandle, squadnamesEndElementHandle);
	XML_SetCharacterDataHandler(parser, squadnamesCharacterDataHandle);


	memset(&pData,0,sizeof(pData));
	pData.curArray = SquadNames;
	pData.maxArraySize = 20;

	XML_SetUserData(parser, &pData);


	if(!XML_Parse(parser, lpcBuffer, uiFSize, TRUE))
	{
		CHAR8 errorBuf[511];

		sprintf(errorBuf, "XML Parser Error in SquadNames.xml: %s at line %d", XML_ErrorString(XML_GetErrorCode(parser)), XML_GetCurrentLineNumber(parser));
		LiveMessage(errorBuf);

		MemFree(lpcBuffer);
		return FALSE;
	}

	MemFree(lpcBuffer);


	XML_ParserFree(parser);


	return( TRUE );
}

BOOLEAN WriteSquadNamesStats()
{

	return( TRUE );
}