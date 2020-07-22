/*
From:ITC
3
Inappropriate code
3.6
Unused variable
3.6.1
"basic types	Internal variables"
*/
#include <stdio.h>
#include <stdlib.h>
void unused_var_001()
{
	int a = 1;
	int b = 2;
	int unuse;
	unuse = a + b;
	printf(" % d ", unuse); /*Tool should not detect this line as error*/ /*No ERROR:Unused variable*/
}
