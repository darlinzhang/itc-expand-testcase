/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.14
" 1-dimensional array	int	Value of random variable	Write"
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                   
extern int sink;                                                                                                    
int rand(void);                                                                                           
void overrun_st_014 ()
{
	int buf[5];
	int index;
	index = rand() % 5;
	buf[index] = 1; /*Tool not should detect this line as error*/ /*No ERROR: buffer overrun */
        sink = buf[idx];
}