/*
From:ITC
3
Inappropriate code
3.1
Dead code
3.1.12
expression statement while (a <b)
*/
#include <stdio.h>
#include <stdlib.h>
extern int sink;
void dead_code_012()
{
	int flag = 1;
	int a = 0;
	int ret;
	while (flag > 0) /*Tool should not detect this line as error*/ /*No ERROR:Dead Code*/
	{
		a++;
		break;
	}
	ret = a;
	sink = ret;
}
