/*
From:ITC
5
Numerical defects
5.3
Data under?ow
5.3.10
"int	Underflow at The return value of the function"
*/
#include<stdio.h>     
extern int sink;       
int data_underflow_010_func_001 ()
{
	return 2;
}

void data_underflow_010 ()
{
	int min = -2147483646;
	int ret;
	ret = min - data_underflow_010_func_001(); /*Tool should Not detect this line as error*/ /*No ERROR:Data Underflow*/
        sink = ret;
}
