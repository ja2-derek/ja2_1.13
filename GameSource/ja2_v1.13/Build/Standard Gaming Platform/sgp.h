#ifndef __SGP_
#define __SGP_

#include "Local.h"
#include "Types.h"
#include "Timer.h"
#include "Debug.h"

#if defined( JA2 ) || defined( UTIL )
#include "Video.h"
#else
#include "video2.h"
#endif

#ifndef JA2
#include "Input.h"
#include "MemMan.h"
#include "FileMan.h"
#include "dbman.h"
#include "SoundMan.h"
#include "pcx.h"
#include "Line.h"
#include "GameLoop.h"
#include "Font.h"
#include "English.h"
#include "Mutex Manager.h"
#include "VObject.h"
#include "Random.h"
#include "shading.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern BOOLEAN		gfProgramIsRunning; // Turn this to FALSE to exit program
extern UINT32			giStartMem;
extern CHAR8			gzCommandLine[100];	// Command line given
extern UINT8			gbPixelDepth;				// GLOBAL RUN-TIME SETTINGS
extern BOOLEAN		gfDontUseDDBlits;		// GLOBAL FOR USE OF DD BLITTING

#if !defined(JA2) && !defined(UTILS)
extern BOOLEAN		gfLoadAtStartup;
extern CHAR8		*gzStringDataOverride;
extern BOOLEAN		gfUsingBoundsChecker;
extern BOOLEAN		gfCapturingVideo;

#endif

// function prototypes
void SGPExit(void);
void ShutdownWithErrorBox(CHAR8 *pcMessage);

#ifdef __cplusplus
}
#endif

#endif
