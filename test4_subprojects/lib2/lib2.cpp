/******************************************************************
* INCLUDE FILES                                                   *
*******************************************************************/
#include <cstdio>
#include "lib2.hpp"
#include <lib1.hpp>

/******************************************************************
* FUNCTION IMPLEMENTATION                     <Module>_<Word>+    *
*******************************************************************/
int32_t Lib2_Api(void)
{
	printf("This is lib2\n");
	Lib1_Api();

	return 0;
}
