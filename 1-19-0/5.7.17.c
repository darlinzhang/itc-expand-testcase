/*
From:ITC
5
Numerical defects
5.7
Power related errors
5.7.17
Very large positive base and very small negative exponent
*/
#include<stdio.h>        
#include<math.h>            
extern double dsink;              
void pow_related_errors_017()
{
	double base=10^3;
	double exponent=-10^3;

	double ans;
	ans=pow(base,exponent); /*Tool should not detect this line as error*/ /*No ERROR:Data Overflow*/
        dsink = ans;
}