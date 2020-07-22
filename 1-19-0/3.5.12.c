/*
From:ITC
3
Inappropriate code
3.5
Return value of function never checked
3.5.12
using fputc function in a infinite while loop
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void function_return_value_unchecked_012()
{
    while (1)
    {
        if (fputc((int)'A', stdout) == EOF) /*Tool should not detect this line as error*/ /*No ERROR:Return value of function never checked*/
        {
            ;
        }
        break;
    }
}
