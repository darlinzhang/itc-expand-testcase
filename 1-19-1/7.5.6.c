/*
From:ITC
7
Resource management defects
7.5
Memory leakage
7.5.6
using pointer to double Memory is allocated and freed based on return value of function
*/
#include<stdio.h>    
#include<stdlib.h>     
#include<string.h>       
int memory_leak_006_func_001(int flag)
{
   int ret;
   if (flag ==0)
	   ret = 0;
   else
	   ret=1;
   return ret;
}

void memory_leak_006()
{
	double *dptr;
	int flag=0;

	if(memory_leak_006_func_001(flag)==0)
	{
		dptr= (double*) malloc(5*sizeof(double));/*Tool should detect this line as error*/ /*ERROR:Memory Leakage */
		if(dptr!=NULL)
		{
           *(dptr+1) = 10.50000;
		}
	}
    if(memory_leak_006_func_001(flag) !=0)
	free(dptr);
}