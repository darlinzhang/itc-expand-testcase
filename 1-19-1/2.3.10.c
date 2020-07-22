/*
From:ITC
2
Dynamic memory defects
2.3
Dynamic buffer underrrun
2.3.10
pointers to structure
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct
{
	int a;
	int b;
	int c;
} dynamic_buffer_underrun_010_s_001;

void dynamic_buffer_underrun_010()
{
	dynamic_buffer_underrun_010_s_001 *sbuf = (dynamic_buffer_underrun_010_s_001 *)calloc(5, sizeof(dynamic_buffer_underrun_010_s_001));
	if (sbuf != NULL)
	{
		sbuf[-1].a = 1; /*Tool should detect this line as error*/ /*ERROR:Buffer Underrun*/
		free(sbuf);
	}
}
