/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.50
 abbreviation for two-dimensional array array size
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                  
extern int sink;                                                                                       
void overrun_st_050 ()
{
	int buf[][6] =
		{
			{1, 2, 3, 4, 5, 6},
			{1, 2, 3, 4, 5, 6},
			{1, 2, 3, 4, 5, 6},
			{1, 2, 3, 4, 5, 6},
			{1, 2, 3, 4, 5, 6}
		};
	buf[4][5] = 1; /*Tool not should detect this line as error*/ /*No ERROR: buffer overrun */
        sink = buf[idx][idx];
}