/*
From:ITC
8
Stack related defects 
8.3
Stack underrun
8.3.1
"int	Underflow with -2	Constant"
*/
#include <stdio.h>

extern int sink;

void data_underflow_001()
{
	int min = -2147483647; /* 0x80000001 */
	int ret;
	ret = min - 2; /*Tool should detect this line as error*/ /*ERROR:Data Underflow*/
	sink = ret;
}
"
