/*
From:ITC
13
"API defects
"
13.2
Memset function
13.2.4
 Ch is signed
*/
#include <stdio.h>
#include<memory.h>
void memset_function_004() {
	char c[3] = { 'a','b','c' };
	int i;
	memset(c, -15, 3 * sizeof(char)); /*Tool should detect this line as error*/ /*ERROR:API error*/
	for (i = 0; i < 3; i++) {
		printf("%c ", c[i]);
	}
}
