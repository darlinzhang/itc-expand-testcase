/*
From:ITC
3
Inappropriate code
3.4
Redundant conditions
3.4.14
"do-while statement	(5<a&&10<a)"
*/
#include <stdio.h>
int rand(void);
extern int sink;
void redundant_cond_014()
{
	int a;
	int b = 0;
	int ret;

	a = rand();
	do
	{
		b += a;
		a--;
	} while ((5 < a) && (10 < a)); /*Tool should detect this line as error*/ /*ERROR:Redundant condition*/
	ret = b;
	sink = ret;
}
