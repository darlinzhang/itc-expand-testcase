/*
From:ITC
15
Control flow defects
15.9
Ignored return values
15.9.5
ignore string type return value
*/
#include<stdio.h>char* func_005() {
	return "HelloWorld";
}

int ignored_return_value_005() {
	func_005();/*Tool should detect this line as error*/ /*ERROR:Control flow error*/
}
