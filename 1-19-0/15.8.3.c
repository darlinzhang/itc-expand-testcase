/*
From:ITC
15
Control flow defects
15.8
Statements with no effects
15.8.3
 expression statement has no effects
*/
#include<stdio.h>
int statement_with_no_effects_003() {
	int a = 1, b = 2, c = 1;
	a = a + c;/*Tool should Not detect this line as error*/ /*ERROR:control flow error*/
	b = b + c;
	return a + b;
}
