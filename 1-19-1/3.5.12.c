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
        fputc((int)'A', stdout); /*Tool should detect this line as error*/ /*ERROR:Return value of function never checked*/
        break;
    }
}
