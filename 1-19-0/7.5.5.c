/*
From:ITC
7
Resource management defects
7.5
Memory leakage
7.5.5
using pointer to float Memory is allocated and freed in conditional statement(if)
*/
#include<stdio.h>  
#include<stdlib.h>    
#include<string.h>    
void memory_leak_005()
{
	float *ptr;
	int flag=10;

	if(flag > 0)
	{
		ptr= (float*) malloc(5*sizeof(float)); /*Tool should not detect  this line as error*/ /*No ERROR:Memory Leakage */
		if(ptr!=NULL)
		{
			*(ptr+1) = 10.5;
			free(ptr);
		}
	}
}
