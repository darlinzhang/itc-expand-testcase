/*
From:ITC
4
Misc defects
4.1
Bad extern type for global variable 
4.1.2
external variable type mistake
*/
#include <stdio.h>
#include <stdlib.h>
extern float invalid_extern_001_glb_float[5];
void invalid_extern_002()
{
	invalid_extern_001_glb_float[3] = 1.0;
}