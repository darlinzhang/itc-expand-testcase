/*
From:ITC
5
Numerical defects
5.5
Integer precision lost because of cast
5.5.13
"a short	int->Linear equation"
*/
#include<stdio.h>      
extern int sink;        
void data_lost_013 ()
{
	short ret;
	int a = 129;
	ret = (254 * a) + 2;/*Tool should detect this line as error*/ /*ERROR:Integer precision lost because of cast*/
        sink = ret;
}