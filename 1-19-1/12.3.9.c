/*
From:ITC
12
Input/Output defects
12.3
IO Without Positioning
12.3.9
 redirect output without position
*/
#include<stdio.h>	
void IO_without_009() {
	freopen(" ", "w", stdout);/*Tool should detect this line as error*/ /*ERROR:input/output error*/
}
