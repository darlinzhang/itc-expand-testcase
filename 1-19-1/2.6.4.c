/*
From:ITC
2
Dynamic memory defects
2.6
Assign small buffer for structure
2.6.4
"struct pointer	Write - Global"
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
	int a;
	int b;
	int c;
} littlemem_st_004_s_001;
littlemem_st_004_s_001 *littlemem_st_004_s_001_gbl_str;

void littlemem_st_004()
{
	char buf[10];

	littlemem_st_004_s_001_gbl_str = (littlemem_st_004_s_001 *)buf;
	littlemem_st_004_s_001_gbl_str->c = 1; /*Tool should detect this line as error*/ /*ERROR:Little Memory or Overflow*/
}
