/*
From:ITC
5
Numerical defects
5.3
Data under?ow
5.3.12
"int	underflow at	An array of element values"
*/
#include<stdio.h>             
extern int sink;                 
void data_underflow_012 ()
{
	int min = -2147483646;
	int dlist[4] = {0, 1, -2, -1};
	int ret;
	ret = min - dlist[2]; /*Tool should Not detect this line as error*/ /*No ERROR:Data Underflow*/
        sink = ret;
}
