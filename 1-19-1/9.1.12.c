/*
From:ITC
9
Static memory defects 
9.1
Static buffer overrun
9.1.12
"an array structure member	-	Constant	Write"
*/
#include<stdio.h>                                                                              
#include<string.h>                                                                                   
extern int sink;                                                                                       
typedef struct {
	int a;
	int b;
	int buf[5];
} overrun_st_012_s_001;
overrun_st_012_s_001 overrun_st_012_s_gbl;
void overrun_st_012 ()
{

	overrun_st_012_s_gbl.buf[5] = 1;/*Tool should detect this line as error*/ /*ERROR: buffer overrun */
}