/*
From:ITC
3
Inappropriate code
3.5
Return value of function never checked
3.5.9
Return more than once in the same function
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double function_return_value_unchecked_009_func_001(double a[], int max)
{
    double ret = 0.0;
    int i;
    for (i = 0; i < max; i++)
        ret += a[i];
    return (ret);
}

void function_return_value_unchecked_009()
{
    int a = 10, b = 2, c = 0;
    double arr[] = {1.0, 2.0, 3.0, 4.0};
    if (a == 20)
    {
        if (function_return_value_unchecked_009_func_001(arr, (sizeof(arr) / sizeof(double))) > a)
            a++;
    }
    else if (b != 2)
    {
        if (function_return_value_unchecked_009_func_001(arr, (sizeof(arr) / sizeof(double))) < b)
            b++;
    }
    else if (c > 0)
    {
        if (function_return_value_unchecked_009_func_001(arr, (sizeof(arr) / sizeof(double))) == 0)
            c++;
    }
    else
    {
        if (function_return_value_unchecked_009_func_001(arr, (sizeof(arr) / sizeof(double))) > 0) /*Tool should not detect this line as error*/ /*No ERROR:Return value of function never checked*/
            c++;
    }
}
