/*
From:ITC
5
Numerical defects
5.1
Bit shift bigger than integral type or negative
5.1.15
"int	Beyond the size of the left shift	Alias for 1 weight"
*/
#include<stdio.h>                                                                            
extern int sink;                                                                                              
void bit_shift_015 ()
{
	int a = 1;
	int shift = 10;
	int shift1;
	int ret;
	shift1 = shift;
	ret = a << shift1;/*Tool should  Not detect this line as error*/ /*NO ERROR:Bit shift error*/
        sink = ret;
}
