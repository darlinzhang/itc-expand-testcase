/*
From:ITC
7
Resource management defects
7.7
Uninitialized memory access
7.7.15
" using a pointer to array of Int, memory allocated and initialized using memcpy by return value of function"
*/
#include<stdio.h>             
#include<stdlib.h>             
#include<string.h>               
int (*uninit_memory_access_015_func_001())[4]
{
	int (*p)[4];
	int arr[4][4] = {{1,2,3,4},
			         {11,22,33,44},
			         {33,44,55,66},
			         {55,66,77,88}};
	int i,j;
	p= (int (*)[]) malloc (sizeof arr);
	memcpy(p, arr, sizeof(arr));
	for (i = 0;i< 4; i++)
	{
		for ( j=0 ;j<4; j++)
		{
			*(p[i]+j) += *(p[i]+j); /*Tool should not detect this line as error*/ /*No ERROR:Uninitialized Memory Access*/
		}
	}
	return p;
}

void uninit_memory_access_015 ()
{
	int (*ptr)[4];
	ptr = uninit_memory_access_015_func_001();
	free(ptr);
	ptr = NULL;
}