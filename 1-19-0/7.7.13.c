/*
From:ITC
7
Resource management defects
7.7
Uninitialized memory access
7.7.13
"using structure padding, enumeration and memcpy"
*/
#include<stdio.h>         
#include<stdlib.h>          
#include<string.h>           
typedef enum { true=1, false=0} bool;

typedef struct {
int int_a;
bool bool_b;
bool dummy[3];
int int_c;
}uninit_memory_access_013_s_001;

void uninit_memory_access_013 ()
{
  int i;
  uninit_memory_access_013_s_001 *s1, s;

  s1 = (uninit_memory_access_013_s_001*)calloc(1,sizeof(uninit_memory_access_013_s_001));
  s1->int_a = 10;
  s1->int_c = 20;
  s1->bool_b = true;

   for (i=0; i<3; i++)
	   s1->dummy[i]= false;

  memcpy(&s, s1, sizeof(uninit_memory_access_013_s_001)); /*Tool should not detect this line as error*/ /*No ERROR:Uninitialized Memory Access*/
  free(s1);
  s1 = NULL;
}