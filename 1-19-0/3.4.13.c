/*
From:ITC
3
Inappropriate code
3.4
Redundant conditions
3.4.13
"while statement	(5<a||10<a)"
*/
#include <stdio.h>
int rand(void);
extern int sink;
void redundant_cond_013()
{
	int a;
	int b = 0;
	int ret;

	a = rand();
	while ((a < 10)) /*Tool should not detect this line as error*/ /*No ERROR:Redundant condition*/
	{
		b += a;
		a--;
	}
	ret = b;
	sink = ret;
}
