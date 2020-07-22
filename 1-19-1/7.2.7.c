/*
From:ITC
7
Resource management defects
7.2
Free non dynamically allocated memory
7.2.7
In a constant while loop
*/
#include<stdlib.h>       
#include<stdio.h>     
#include<string.h>     
void free_nondynamic_allocated_memory_007()
{
	char* ptr="a";
	while(1)
	free(ptr); /*Tool should detect this line as error*/ /*ERROR:Free memory not allocated dynamically*/
}
