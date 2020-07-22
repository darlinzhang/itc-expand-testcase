/*
From:ITC
7
Resource management defects
7.1
Double free
7.1.2
"Basic type where pointer is ""freed"" in a if condition in a loop"
*/
#include<stdio.h>                         
#include<stdlib.h>                           
#include<string.h>                            
void double_free_002()
{
	char* ptr= (char*) malloc(10*sizeof(char));
	int i;
	
	for(i=0;i<10;i++)
	{
		ptr[i]='a';
		if(i==10)
		free(ptr);
	}
	free(ptr); /*Tool should Not detect this line as error*/ /*No ERROR:Double free*/
}
