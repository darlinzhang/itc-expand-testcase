/*
From:ITC
12
Input/Output defects
12.4
Invalid Length Modifier Error
12.4.4
The int type output length is 0
*/
#include<stdio.h>	
void invalid_length_004() {
	int i = 1000;
	printf("%00d", i);/*Tool should detect this line as error*/ /*ERROR: input/output error*/
}
