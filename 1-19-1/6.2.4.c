/*
From:ITC
6
Pointer related defects
6.2
Wrong arguments passed to a function pointer
6.2.4
function : char * and function pointer : float
*/
#include<stdio.h>     
#include<string.h>                           
char wrong_arguments_func_pointer_004_func_001 (char *p)
{
	return (*p);
}

void wrong_arguments_func_pointer_004 ()
{
	char (*func)(float);
	char ret;
	float a =20.5;
	func = (char (*)(float ))wrong_arguments_func_pointer_004_func_001;
	ret = func(a);/*Tool should detect this line as error*//*ERROR:Wrong arguments passed to a function pointer*/

}
