/*
From:ITC
12
Input/Output defects
12.8
Operation relate to file
12.8.2
File input without positioning results in undefined behaviour
*/
#include<stdio.h>                                                                                                                    
void operation_relate_to_file_002() {
	FILE* fp;
	fp = (FILE*)fopen("x.txt","a+");
	int a = 1, b = 2;
	fprintf(fp, "%d\n", a + b); /*Tool should Not detect this line as error*/ /*ERROR:input/output error*/
	fclose(fp);
}