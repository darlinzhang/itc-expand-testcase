/*
From:ITC
7
Resource management defects
7.1
Double free
7.1.11
double Free in a while loop with a condition
*/
#include<stdio.h>         
#include<stdlib.h>         
#include<string.h>          
void double_free_011()
{
	char* ptr= (char*) malloc(sizeof(char));
	int flag=1,a=0,b=2;

	while(a<b)
	{
		if(flag ==1)
		free(ptr); /*Tool should detect this line as error*/ /*ERROR:Double free*/
		a++;
	}
}
