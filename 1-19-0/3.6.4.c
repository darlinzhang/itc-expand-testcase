/*
From:ITC
3
Inappropriate code
3.6
Unused variable
3.6.4
"basic types	Global variables"
*/
#include <stdio.h>
#include <stdlib.h>
int unused_var_004_glb_a = 1;
int unused_var_004_glb_b = 2;
int unused_var_004_glb_unuse;

void unused_var_004()
{
	unused_var_004_glb_unuse = unused_var_004_glb_a + unused_var_004_glb_b;
	printf(" % d ", unused_var_004_glb_unuse); /*Tool should not detect this line as error*/ /*No ERROR:Unused variable*/
}
