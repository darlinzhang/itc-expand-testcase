/*
From:ITC
2
Dynamic memory defects
2.2
Dynamic buffer overrun
2.2.11
pointers to struct with an array as member
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct
{
	int a;
	int b;
	int buf[5];
} dynamic_buffer_overrun_011_s_001;

void dynamic_buffer_overrun_011()
{
	dynamic_buffer_overrun_011_s_001 *s = (dynamic_buffer_overrun_011_s_001 *)calloc(5, sizeof(dynamic_buffer_overrun_011_s_001));
	if (s != NULL)
	{
		(s + 4)->buf[4] = 1; /*Tool should Not detect this line as error*/ /*No ERROR:Buffer overrun*/
		free(s);
	}
}
