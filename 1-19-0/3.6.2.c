/*
From:ITC
3
Inappropriate code
3.6
Unused variable
3.6.2
"structure member	Internal variables"
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int a;
	int b;
	int unuse;
} unused_var_002_s_001;

void unused_var_002()
{
	unused_var_002_s_001 s;
	s.a = 1;
	s.b = 2;
	s.unuse = s.a + s.b;
	printf(" % d ", s.unuse); /*Tool should not detect this line as error*/ /*No ERROR:Unused variable*/
}