/*
From:ITC
2
Dynamic memory defects
2.2
Dynamic buffer overrun
2.2.2
a pointer to short
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void dynamic_buffer_overrun_002()
{
	short *buf = (short *)calloc(5, sizeof(short));
	if (buf != NULL)
	{
		*(buf + 4) = 1; /*Tool should Not detect this line as error*/ /*No ERROR:Buffer overrun*/
		free(buf);
	}
}
