/*
From:ITC
15
Control flow defects
15.2
Undefined behavior
15.2.1
An example of undefined behavior in C is the behavior on signed integer overflow
*/
#include <assert.h>
#include <limits.h>
#include <stdio.h>
int foo(int a) {
	assert(a + 100 > a);
	printf("%d %d\n", a + 100, a);
	return a;
}
int undefined_behavior_001() {
	foo(100);
	foo(INT_MAX);
	return 0;
}
