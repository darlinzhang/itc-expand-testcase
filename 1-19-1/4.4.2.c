/*
From:ITC
4
Misc defects
4.4
Unintentional end less loop
4.4.2
for statement No initialization expression for reuse
*/
#include <stdio.h>
#include <stdlib.h>
extern int sink;
void endless_loop_002()
{
	int ret;
	int a = 0;
	int i;
	for (i = 0; i < 10;)
	{
		a++; /*Tool should detect this line as error*/ /*ERROR:Unintentional end less loop*/
	}
	ret = a;
	sink = ret;
}
