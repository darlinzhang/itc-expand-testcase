/*
From:ITC
12
Input/Output defects
12.3
IO Without Positioning
12.3.8
 redirect input without position
*/
#include<stdio.h>	
void IO_without_008() {
     freopen(" ", "r", stdin);/*Tool should detect this line as error*/ /*ERROR:input/output error*/
}
