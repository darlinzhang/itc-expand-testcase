/*
From:ITC
15
Control flow defects
15.7
uncomplete logic
15.7.6
do-while logic is uncomplete
*/
#include<stdio.h>                                  
void uncomplete_logic_006() {
	int a = 10;
	do {
		a--;/*Tool should detect this line as error*/ /*ERROR:Control flow error*/
	} while (a>0);
}
