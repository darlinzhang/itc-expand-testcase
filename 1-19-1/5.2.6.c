/*
From:ITC
5
Numerical defects
5.2
Data over?ow
5.2.6
"Overflow in unsigned short  + 1	Constant"
*/
#include<stdio.h>      
#include<stdlib.h>        
static int sink;            
void data_overflow_006 ()
{
	unsigned short max = 0xffff;
	unsigned short ret;
	ret = max + 1;/*Tool should detect this line as error*/ /*ERROR:Data Overflow*/
        sink = ret;
}