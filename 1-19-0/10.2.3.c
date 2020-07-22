/*
From:ITC
10
Simple type defects
10.2
char
10.2.3
Out of range for char type
*/
#include<stdio.h>                                                                            
void char_003() {
	char m = 'жа';/*Tool should Not detect this line as error*/ /*ERROR:Simple type error*/
	printf(""%c"", m);
}