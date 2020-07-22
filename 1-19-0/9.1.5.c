/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.5
"1-dimensional array	long	Constant	Write"
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                   
extern int sink;                                                                                       
void overrun_st_005 ()
{
	long buf[5];
	buf[4] = 1; /*Tool not should detect this line as error*/ /*No ERROR: buffer overrun */
        sink = buf[idx];
}
