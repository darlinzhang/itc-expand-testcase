/*
From:ITC
5
Numerical defects
5.2
Data over?ow
5.2.14
int Overflow at + 1 Variable
*/
#include<stdio.h>     
#include<stdlib.h>    
static int sink;      
void data_overflow_014 ()
{
	int max = 0x7ffffffe;
	int d = 1;
	int ret;
	ret = max + d;/*Tool should Not detect this line as error*/ /*No ERROR:Data Overflow*/
        sink = ret;
}
