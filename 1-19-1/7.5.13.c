/*
From:ITC
7
Resource management defects
7.5
Memory leakage
7.5.13
" Union of pointer	Constant	 expressions	Write"
*/
#include<stdio.h>    
#include<stdlib.h>     
#include<string.h>      
typedef struct {
	int a;
	int b;
} memory_leak_0013_s_001;

typedef struct {
	int a;
	int b;
} memory_leak_0013_s_002;

typedef struct {
	int a;
	int b;
} memory_leak_0013_s_003;

typedef union {
	memory_leak_0013_s_001 *s1;
	memory_leak_0013_s_002 *s2;
	memory_leak_0013_s_003 *s3;
} memory_leak_0013_uni_001;

void memory_leak_0013 ()
{
	memory_leak_0013_uni_001 *u = (memory_leak_0013_uni_001 * )malloc(5*sizeof( memory_leak_0013_uni_001 ));
	if(u!=NULL)
	{
	u->s1 = (memory_leak_0013_s_001 *) malloc(sizeof(memory_leak_0013_s_001));
	}
	memory_leak_0013_uni_001 *p  = (memory_leak_0013_uni_001 * )malloc(5*sizeof( memory_leak_0013_uni_001 )); /*Tool should detect this line as error*/ /*ERROR:Memory Leakage */
	p->s1 = (memory_leak_0013_s_001 *) malloc(sizeof(memory_leak_0013_s_001));
	
	if(u!=NULL)
	{
	p = u;
	p->s1->a = 1;
    free(p->s1);
	free(p);

	}
}