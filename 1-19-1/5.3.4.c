/*
From:ITC
5
Numerical defects
5.3
Data under?ow
5.3.4
"int	underflow with -128 Constant"
*/
#include<stdio.h>               
extern int sink;                   
void data_underflow_004 ()
{
	int min = -2147483521;
	int ret;
	ret = min - 128;/*Tool should detect this line as error*/ /*ERROR:Data Underflow*/
        sink = ret;
}