/*
From:ITC
2
Dynamic memory defects
2.6
Assign small buffer for structure
2.6.5
"struct pointer	Write - Global , assigned in another function"
*/
#include <stdio.h>
#include <string.h>
typedef struct
{
	int a;
	int b;
	int c;
} littlemem_st_005_s_001;

littlemem_st_005_s_001 *littlemem_st_005_s_001_gbl_str;

char littlemem_st_005_gbl_buf[12];

void littlemem_st_005_func_001()
{
	littlemem_st_005_s_001_gbl_str = (littlemem_st_005_s_001 *)littlemem_st_005_gbl_buf;
}

void littlemem_st_005()
{
	littlemem_st_005_func_001();
	littlemem_st_005_s_001_gbl_str->c = 1; /*Tool should not detect this line as error*/ /*No ERROR:Little Memory or Overflow*/
}
