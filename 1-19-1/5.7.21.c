/*
From:ITC
5
Numerical defects
5.7
Power related errors
5.7.21
 Positive base and very small odd negative exponent
*/
#include<stdio.h>      
#include<math.h>         
extern double dsink;   
void pow_related_errors_021()
{
	double base=100;
	double exponent=-10^3500;

	double ans;
	ans=pow(base,exponent);/*Tool should detect this line as error*/ /*ERROR:Data Overflow*/
        dsink = ans;
}