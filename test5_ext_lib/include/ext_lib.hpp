/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <stdint.h>

/******************************************************************
* EXPORTED MACROS                              [for headers only] *
*******************************************************************/
#if defined (_WIN32) && defined(ext_lib_EXPORTS)
  #if defined(ext_lib_EXPORTS)
    #define  ext_lib_EXPORT __declspec(dllexport)
  #else
    #define  ext_lib_EXPORT __declspec(dllimport)
  #endif /* ext_lib_EXPORTS */
#else /* defined (_WIN32) */
 #define ext_lib_EXPORT
#endif

/******************************************************************
* EXPORTED FUNCTIONS PROTOTYPES               <Module>_<Word>+    *
*******************************************************************/
ext_lib_EXPORT int32_t ExtLib_Api(void);

