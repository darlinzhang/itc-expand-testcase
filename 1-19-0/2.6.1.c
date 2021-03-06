/*
From:ITC
2
Dynamic memory defects
2.6
Assign small buffer for structure
2.6.1
read pointer structure
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
	int a;
	int b;
	int c;
} littlemem_st_001_s_001;

void littlemem_st_001()
{
	char buf[12];
	littlemem_st_001_s_001 *p;
	int ret;
	int i;

	for (i = 0; i < 12; i++)
	{
		buf[i] = 1;
	}

	p = (littlemem_st_001_s_001 *)buf;
	ret = p->c; /*Tool should not detect this line as error*/ /*No ERROR:Little Memory or Overflow*/
	printf(" % d \n ", p->c);
}
