/*
From:ITC
9
Static memory defects 
9.2
Static buffer underrun 
9.2.11
"1 loop	1-Dimensional array"
*/
#include<stdio.h>                                                                                                      
extern int sink;                                                                                    
int underrun_st_011_gbl_buf[5];
void underrun_st_011 ()
{
	int i=4;
	while(i > -1)
	{
		underrun_st_011_gbl_buf[i] = 1; /*Tool should not detect this line as error*/ /*No ERROR:Data Underrun*/
	    i--;
	}
}