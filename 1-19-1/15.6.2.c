/*
From:ITC
15
Control flow defects
15.6
Loop and if bodies
15.6.2
Empty else block
*/
#include<stdio.h>                                                                 
int loop_and_if_bodies_002()
{
    int a;
    scanf("%d", &a);
    if (1)
    {
        return a + 1;
    }
    else                // empty else statement, can be safely removed
    {/*Tool should detect this line as error*/ /*ERROR:control flow error*/
    }
}
