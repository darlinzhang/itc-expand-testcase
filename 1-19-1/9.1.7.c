/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.7
" 1-dimensional array	double	Constant	Write"
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                  
 extern int sink;                                                                                       
void overrun_st_007 ()
{
	double buf[5];
	buf[5] = 1.0;/*Tool should detect this line as error*/ /*ERROR: buffer overrun */
        sink = buf[idx];
}
