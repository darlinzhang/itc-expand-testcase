/*
From:ITC
5
Numerical defects
5.1
Bit shift bigger than integral type or negative
5.1.17
the operands is a constant
*/
#include<stdio.h>                                                                            
extern int sink;                                                                                              
void bit_shift_017 ()
{
	int ret;
	ret = 1 << 10;/*Tool should  Not detect this line as error*/ /*NO ERROR:Bit shift error*/
        sink = ret;
}
