/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <stdint.h>
#include <cstdio>

#if (defined __MINGW32__)
  #pragma message ("__MINGW32__ defined")
#elif (defined _WIN32)
  #pragma message ("_WIN32 defined")
#elif (defined __linux__)
  #pragma message ("__linux__ defined")
#else
  #error
#endif

/******************************************************************
* FUNCTION IMPLEMENTATION                     <Module>_<Word>+    *
*******************************************************************/
int32_t main(int32_t argc, char **argv)
{
	(void)argc;
	(void)argv;

	printf("Hello world\n");
	printf("Platform: %s\n", BUILD_TARGET);

	return 0;
}
