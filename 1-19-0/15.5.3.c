/*
From:ITC
15
Control flow defects
15.5
Deep breaks
15.5.3
loops should not have more than one breaks
*/
#include<stdio.h>                                                                                                                                          
void deep_breaks_003() {
    for (int i = 0; i < 10; i++) { // noncompliant, loop only executes once
        printf("i is %d", i); /*Tool should Not detect this line as error*/ /*ERROR:Control flow error*/
                            
    }
}
