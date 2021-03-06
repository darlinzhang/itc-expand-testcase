/*
From:ITC
2
Dynamic memory defects
2.3
Dynamic buffer underrrun
2.3.8
double pointers to int 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void dynamic_buffer_underrun_008()
{
	int **buf = (int **)calloc(5, sizeof(int *));
	int i, j;

	for (i = 0; i < 5; i++)
		buf[i] = (int *)calloc(5, sizeof(int));

	for (i = -1; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			*(*(buf + i) + j) = i; /*Tool should detect this line as error*/ /*ERROR:Buffer Underrun*/
		}
		if (i > 0)
			free(buf[i]);
	}
	free(buf);
}
