/*
From:ITC
13
"API defects
"
13.2
Memset function
13.2.1
Replace characters with integers
*/
#include <stdio.h>                   
#include<memory.h>                                                                                                      
void memset_function_001(){ 
	char a[5];
	int i;
	memset(a, 1, 5);  /*Tool should detect this line as error*/ /*ERROR:API error*/
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
}
