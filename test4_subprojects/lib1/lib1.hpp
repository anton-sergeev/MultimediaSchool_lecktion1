/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <stdint.h>

/******************************************************************
* EXPORTED MACROS                              [for headers only] *
*******************************************************************/
#if defined (_WIN32) && defined(lib1_EXPORTS)
  #if defined(lib1_EXPORTS)
    #define  lib1_EXPORT __declspec(dllexport)
  #else
    #define  lib1_EXPORT __declspec(dllimport)
  #endif /* lib1_EXPORTS */
#else /* defined (_WIN32) */
 #define lib1_EXPORT
#endif

/******************************************************************
* EXPORTED FUNCTIONS PROTOTYPES               <Module>_<Word>+    *
*******************************************************************/
lib1_EXPORT int32_t Lib1_Api(void);

