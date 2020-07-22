/*
From:ITC
7
Resource management defects
7.3
Invalid memory access to already freed area
7.3.3
 using a pointer to char in an infinite while loop and Strcpy
*/
#include<stdio.h>     
#include<stdlib.h>     
#include<string.h>      
void invalid_memory_access_003 ()
{
	int i=1;
	char *buf,*c;
	while(i>0)
	{
		buf = (char *) malloc (25 * sizeof(char));
		if(buf!=NULL)
		{
		strcpy(buf,"This is String");
	    free(buf);
		}
	    c = buf; /*Tool should detect this line as error*/ /*ERROR:Invalid memory access to already freed area*/
	    i++;
	    if(i>=10)
	    	break;
	}
        psink = c;
}
