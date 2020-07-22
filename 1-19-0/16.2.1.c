/*
From:ITC
16
Macros defects
16.2
Side effect free parameters
16.2.1
side effects on macro arguments
*/
#include<stdio.h>
#include <assert.h>
#include <stddef.h>
#define ABS(x) (((x) < 0) ? -(x) : (x))                          
void side_effect_free_parameters_001(int n) {
	/* Validate that n is within the desired range *//*Tool should detect this line as error*/ /*ERROR:Macros error*/
	++n;
	int m = ABS(n);
}
