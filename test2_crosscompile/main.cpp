/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <stdint.h>
#include <cstdio>

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
