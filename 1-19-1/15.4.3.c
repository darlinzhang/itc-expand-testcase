/*
From:ITC
15
Control flow defects
15.4
Switches
15.4.3
Missing break in switch statement
*/
#include<stdio.h>
void switch_003(){
    int a;
    scanf("%d ", &a);
    switch (a) {
    case 1:
        break;
    case 2:
        printf("%d", a);/* do something*/  /*Tool should detect this line as error*/ /*ERROR:control flow error*/
    default:
        break; 
    }
}
