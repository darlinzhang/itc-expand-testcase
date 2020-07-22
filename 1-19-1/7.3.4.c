/*
From:ITC
7
Resource management defects
7.3
Invalid memory access to already freed area
7.3.4
using a pointer to char and initialize memory block with memset and if condition using static variable of file scope
*/
#include<stdio.h>      
#include<stdlib.h>      
#include<string.h>      
static int staticflag1=1;     
void invalid_memory_access_004 ()
{
    char * buf = NULL;
    if(staticflag1)
    {
        buf = (char *)malloc(100*sizeof(char));
        if(buf !=NULL)
        {
        	memset(buf, 'A', 100-1);
            buf[100-1] = '\0';
            free(buf);
        }
    }
    if(staticflag1)
    {
        printf("String= %s",buf); /*Tool should detect this line as error*/ /*ERROR:Invalid memory access to already freed area*/
    }
}