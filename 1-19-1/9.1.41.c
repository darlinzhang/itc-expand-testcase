/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.41
"1 loop	1-Dimensional array"
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                  
extern int sink;                                                                                       
void overrun_st_041 ()
{
	int buf[5];
	int i;
	for (i = 0; i <= 5; i ++)
	{
		buf[i] = 1;/*Tool should detect this line as error*/ /*ERROR: buffer overrun */
	}
        sink = buf[idx];
}
