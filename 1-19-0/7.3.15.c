/*
From:ITC
7
Resource management defects
7.3
Invalid memory access to already freed area
7.3.15
Use a block of memory returned from a function after it has been freed
*/
#include<stdio.h>  
#include<stdlib.h>    
#include<string.h>     
static char * invalid_memory_access_015_func_001 (char *str1)
{
    int i = 0;
    int j;
    char * str_rev = NULL;
    if (str1 != NULL)
    {
        i = strlen(str1);
        str_rev = (char *) malloc(i+1);
        if (str_rev != NULL)
        {
        	for (j = 0; j < i; j++)
            {
                str_rev[j] = str1[i-j-1]; /*Tool should not detect this line as error*/ /*No ERROR:Invalid memory access to already freed area*/
            }
            str_rev[i] = '\0';
        }
        /*free(str_rev) ;
        str_rev = NULL;*/
        return str_rev;
    }
    else
    {
        return NULL;
    }
}
void invalid_memory_access_015 ()
{
    int j;
    char buf[][25]={"This is a String",
    		     "Second String"};
    for(j = 0; j <= 1; j++)
    {
        {
            char * str;
            str = invalid_memory_access_015_func_001(buf[j]);
            psink = str;
        }
    }
}
