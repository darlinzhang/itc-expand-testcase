/*
From:ITC
4
Misc defects
4.3
Uninitialized variable 
4.3.9
char array Function arguments
*/
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

void uninit_var_009_func_001(char buf[])
{
	char ret[25];
	strcpy(buf, ret); /*Tool should detect this line as error*/ /*ERROR:Uninitialized Variable*/
}

void uninit_var_009()
{
	char buf[25];
	uninit_var_009_func_001(buf);
}
