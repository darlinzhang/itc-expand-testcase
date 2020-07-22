/*
From:ITC
13
"API defects
"
13.3
Obsolete function
13.3.2
obsolete POSIX functions
*/
#include<stdio.h>
#include <stdbool.h>
void obsolete_function_002() {
	unsigned int seed = 123;
	printf("%d", rand_r(&seed)); /*Tool should detect this line as error*/ /*ERROR:API error*/
}
