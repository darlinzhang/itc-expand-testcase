/*
From:ITC
2
Dynamic memory defects
2.3
Dynamic buffer underrrun
2.3.9
double pointers to int 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void dynamic_buffer_underrun_009()
{
	int *buf1 = (int *)calloc(5, sizeof(int));
	int *buf2 = (int *)calloc(5, sizeof(int));
	int *buf3 = (int *)calloc(5, sizeof(int));
	int *buf4 = (int *)calloc(5, sizeof(int));
	int *buf5 = (int *)calloc(5, sizeof(int));
	int **pbuf[5] = {&buf1, &buf2, &buf3, &buf4, &buf5};
	int i, j = 4;
	for (i = 0; i < 5; i++)
	{
		*((*pbuf[i]) + j) = 5; /*Tool should Not detect this line as error*/ /*No ERROR:Buffer Underrun*/
	}
	free(buf1);
	free(buf2);
	free(buf3);
	free(buf4);
	free(buf5);
}
