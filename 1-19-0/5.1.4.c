/*
From:ITC
5
Numerical defects
5.1
Bit shift bigger than integral type or negative
5.1.4
"unsigned long	Beyond the size of the left shift"
*/
#include<stdio.h>                                                                            
extern int sink;                                                                                                   
void bit_shift_004 ()
{
	unsigned long a = 1;
	unsigned long ret;
	ret = a << 10; /*Tool should  Not detect this line as error*/ /*NO ERROR:Bit shift error*/
        sink = ret;
}
