/*
From:ITC
15
Control flow defects
15.8
Statements with no effects
15.8.4
 for statement has no effects
*/
#include<stdio.h>
void statement_with_no_effects_004() {
	int i = 10;
	for (; i < 11; ) {/*Tool should Not detect this line as error*/ /*ERROR:control flow error*/
		i--;
	}
}
