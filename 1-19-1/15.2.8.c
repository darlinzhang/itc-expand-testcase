/*
From:ITC
15
Control flow defects
15.2
Undefined behavior
15.2.8
Attempting to modify the string literal is undefined behavior
*/
#include <assert.h>
#include <limits.h>
#include <stdio.h>
void undefined_behavior_008() {
	char* str = "string literal";
	str[0] = 'S';
}
