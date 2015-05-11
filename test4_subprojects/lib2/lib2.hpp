/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <stdint.h>

/******************************************************************
* EXPORTED MACROS                              [for headers only] *
*******************************************************************/
#if defined (_WIN32) && defined(lib2_EXPORTS)
  #if defined(lib2_EXPORTS)
    #define  lib2_EXPORT __declspec(dllexport)
  #else
    #define  lib2_EXPORT __declspec(dllimport)
  #endif /* lib2_EXPORTS */
#else /* defined (_WIN32) */
 #define lib2_EXPORT
#endif

/******************************************************************
* EXPORTED FUNCTIONS PROTOTYPES               <Module>_<Word>+    *
*******************************************************************/
lib2_EXPORT int32_t Lib2_Api(void);

