#include <stdio.h>

#define LINUX

#if defined(LINUX)
   #define HDR "linux.h"
#elif defined(WIN32)
   #define HDR "windows.h"
#else
   #define HDR "default.h"
#endif

// Change the DEBUG_LEVEL constant
// to enable/disble tracing and logginf
#define DEBUG_LEVEL 0

#if DEBUG_LEVEL == 1
   #define TRACE 1
   #define LOG 1
#endif

//#include HDR //Commented out included b/c the files don't exist

int main(void)
{
#ifdef TRACE
   printf("tracing on\n", HDR);
#endif
   
   printf("Bye!\n");
   return 0;

}
