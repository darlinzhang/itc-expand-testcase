/*
From:ITC
9
Static memory defects 
9.2
Static buffer underrun 
9.2.12
a decrement in a loop pointer value
*/
#include<stdio.h>                                                                                                     
 extern int sink;                                                                                    
int underrun_st_012_gbl_buf[5];
void underrun_st_012 ()
{
	int *p;
	p = &underrun_st_012_gbl_buf[4];
	int i=4;
	while(i > -1)
	{
		*p = 1; /*Tool should not detect this line as error*/ /*No ERROR:Data Underrun*/
		p --;
		i--;
	}
}