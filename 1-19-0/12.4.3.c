/*
From:ITC
12
Input/Output defects
12.4
Invalid Length Modifier Error
12.4.3
int type length modifier has Other characters 
*/
#include<stdio.h>	
void invalid_length_003() {
	int a;
	scanf("%d", &a);/*Tool should Not detect this line as error*/ /*ERROR: input/output error*/
}