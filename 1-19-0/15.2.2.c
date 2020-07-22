/*
From:ITC
15
Control flow defects
15.2
Undefined behavior
15.2.2
create a universal character name through concatenation
*/
#include <assert.h>
#include <limits.h>
#include <stdio.h>
#define assign(ucn, val) 
ucn = val
void undefined_behavior_002() {
	int \u0401;
	/* ... */
	assign(\u0401, 4);
	/* ... */
}
