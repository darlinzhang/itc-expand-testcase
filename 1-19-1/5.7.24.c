/*
From:ITC
5
Numerical defects
5.7
Power related errors
5.7.24
Very small negative base and very small odd negative exponent
*/
#include<stdio.h>   
#include<math.h>      
extern double dsink;  
void pow_related_errors_024()
{
	double base=-0.0004;
	double exponent=-10^35000;

	double ans;
	ans=pow(base,exponent);/*Tool should detect this line as error*/ /*ERROR:Data Overflow*/
        dsink = ans;
}