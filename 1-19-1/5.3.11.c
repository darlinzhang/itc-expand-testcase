/*
From:ITC
5
Numerical defects
5.3
Data under?ow
5.3.11
"int	Underflow at Function arguments"
*/
#include<stdio.h>                  
extern int sink;                  
void data_underflow_011_func_001 (int d)
{
	int min = -2147483647;
	int ret;
	ret = min - d; /*Tool should detect this line as error*/ /*ERROR:Data Underflow*/
        sink = ret;
}

void data_underflow_011 ()
{
	data_underflow_011_func_001(2);
}