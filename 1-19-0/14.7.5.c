/*
From:ITC
14
Object orientedness defects
14.7
Initialization
14.7.5
Implicit declaration of functions is not allowed
*/
#include <stdio.h>
#include<stdlib.h>
int initialization_005() {
	for (size_t i = 0; i < 100; ++i) {
		/* int malloc() assumed */
		char* ptr = (char*)malloc(0x10000000);/*Tool should Not detect this line as error*/ /*ERROR:initialization error*/
		*ptr = 'a';
	}
	return 0;
}
