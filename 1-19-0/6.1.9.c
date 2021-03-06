/*
From:ITC
6
Pointer related defects
6.1
Bad cast of a function pointer
6.1.9
return type function union * and function pointer: union
*/
#include<stdio.h>      
#include<string.h>     
extern int sink;        
typedef union {
	int a;
	int b;
} func_pointer_009_u_001;

func_pointer_009_u_001 * func_pointer_009_func_001 (void)
{
	int flag = rand();
	flag = 1;
	func_pointer_009_u_001 *u;
	switch (flag)
	{
		case 1:
		{
			u = (func_pointer_009_u_001 *)calloc(1,sizeof(func_pointer_009_u_001));
			if(u!=NULL)
			u->a = 40;
			return u;
		}
		default:
			return (func_pointer_009_u_001 *)(-1);
	}
}

void func_pointer_009 ()
{
        int ret = 0;
	func_pointer_009_u_001 *p;
	func_pointer_009_u_001 *(*fptr)(); 
	fptr = func_pointer_009_func_001;
	p = fptr ();/*Tool should not detect this line as error*/ /*No ERROR:Bad function pointer casting*/
	if(p!=NULL)
	{
	   ret = p->b;
	   free(p);
	}
	p= NULL;
        sink = ret;
}
