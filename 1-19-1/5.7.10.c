/*
From:ITC
5
Numerical defects
5.7
Power related errors
5.7.10
 Very small base and exponent greater than 1
*/
#include<stdio.h>     
#include<math.h>      
extern double dsink;  
void pow_related_errors_010()
{
	double base=0.0000000000000000000000000000000000036;
	double exponent=20000;

	double ans;
	ans=pow(base,exponent);/*Tool should detect this line as error*/ /*ERROR:Data Overflow*/
        dsink = ans;
}