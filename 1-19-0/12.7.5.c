/*
From:ITC
12
Input/Output defects
12.7
Invalid Scanf Arg
12.7.5
 Wrong parameter sequence
*/
#include<stdio.h>                                                                                                                     
void invalid_scanf_arg_005() {
	int a;
	char b;
	scanf("%d%c", &a, &b);// /*Tool should  Not detect this line as error*/ /*ERROR:input/output error*/
}