/*
From:ITC
12
Input/Output defects
12.7
Invalid Scanf Arg
12.7.4
Parameter type mismatch
*/
#include<stdio.h>                                                                                                         
void invalid_scanf_arg_004() {
	double d;
	scanf("%c", &d);// /*Tool should detect this line as error*/ /*ERROR:input/output error*/
}