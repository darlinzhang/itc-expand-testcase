/*
From:ITC
12
Input/Output defects
12.5
Invalid Printf Arg
12.5.4
Parameter type mismatch(string)
*/
#include<stdio.h>
#include<stdlib.h>                                                                                                                  
void invalid_printf_arg_004() {
	char c[10] = "hello";
	printf("%s ", c);/*Tool should Not detect this line as error*/ /*ERROR:input/output error*/
}