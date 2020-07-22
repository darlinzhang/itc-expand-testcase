/*
From:ITC
15
Control flow defects
15.2
Undefined behavior
15.2.5
read uninitialized memory
*/
#include <assert.h>
#include <limits.h>
#include <stdio.h>
void set_flag(int number, int* sign_flag) {
	if (NULL == sign_flag) {
		return;
	}

	if (number > 0) {
		*sign_flag = 1;
	}
	else if (number < 0) {
		*sign_flag = -1;
	}
}
int undefined_behavior_005() {
	int number=1;
	int sign=0;
	set_flag(number, &sign);
	return sign < 0;
}
