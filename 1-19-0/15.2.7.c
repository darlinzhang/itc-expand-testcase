/*
From:ITC
15
Control flow defects
15.2
Undefined behavior
15.2.7
cast pointers into more strictly aligned pointer types
*/
#include <assert.h>
#include <assert.h>
#include <limits.h>
#include <stdio.h>
void undefined_behavior_007(void) {
	char c = 'x';
	int i = c;
	int* ip = &i;

	assert(ip == &i);
}
