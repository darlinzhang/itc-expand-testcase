/*
From:ITC
7
Resource management defects
7.7
Uninitialized memory access
7.7.2
using unsigned long variable - Heap access
*/
#include<stdio.h>
#include<stdlib.h>  
void uninit_memory_access_002 ()
{
	double *a = (double *) calloc(3,sizeof(double));
	if(a!=NULL)
	{
	printf("%lf ",a[1]);/*Tool should detect this line as error*/ /*ERROR:Uninitialized Memory Access*/
	    free(a);
	}
}