/*
From:ITC
15
Control flow defects
15.7
uncomplete logic
15.7.3
switch logic is uncomplete
*/
#include<stdio.h>                                                                                                             
int uncomplete_logic_003() {
	int a;
	scanf(""%d"", &a);
	switch (a) {
	case 1:
		return a;
		break;/*Tool should detect this line as error*/ /*ERROR:Control flow error*/
	}
}
