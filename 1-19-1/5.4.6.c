/*
From:ITC
5
Numerical defects
5.4
Division by zero 
5.4.6
/ *p pointer to int
*/
#include<stdio.h>   
int zero_division_006_gbl_divisor = 0;
void zero_division_006 ()
{
	int dividend = 1000;

	int *p;
	int ret;
	p = &zero_division_006_gbl_divisor;
	ret = dividend / *p;/*Tool should detect this line as error*/ /* ERROR:division by zero */
}