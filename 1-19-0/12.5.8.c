/*
From:ITC
12
Input/Output defects
12.5
Invalid Printf Arg
12.5.8
Too many parameters
*/
#include<stdio.h>
#include<stdlib.h>                                                                                                              
 void invalid_printf_arg_008() {
	int a = 2, b = 4;
	printf("%d %d", a, b);/*Tool should Not detect this line as error*/ /*ERROR:input/output error*/
}