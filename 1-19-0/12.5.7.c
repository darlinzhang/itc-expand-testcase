/*
From:ITC
12
Input/Output defects
12.5
Invalid Printf Arg
12.5.7
Insufficient number of parameters
*/
#include<stdio.h>
#include<stdlib.h>                                                                                                                  
void invalid_printf_arg_007() {
	int a = 1, b = 2;
	printf("%d %d ", a,b);/*Tool should Not detect this line as error*/ /*ERROR:input/output error*/
}