/*
From:ITC
5
Numerical defects
5.1
Bit shift bigger than integral type or negative
5.1.6
" int	Beyond the size of the right shift"
*/
#include<stdio.h>                                                                            
extern int sink;                                                                                           
void bit_shift_006 ()
{
	int a = 1;
	int ret;
	ret = a >> 10;/*Tool should  Not detect this line as error*/ /*NO ERROR:Bit shift error*/
        sink = ret;
}
