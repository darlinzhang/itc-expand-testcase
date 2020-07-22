/*
From:ITC
2
Dynamic memory defects
2.2
Dynamic buffer overrun
 2.2.4
a pointer to int 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void dynamic_buffer_overrun_004()
{
	int *buf = (int *)calloc(5, sizeof(int));
	if (buf != NULL)
	{
		*(buf + 5) = 1; /*Tool should detect this line as error*/ /*ERROR:Buffer overrun*/
		free(buf);
	}
}
