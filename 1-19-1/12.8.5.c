/*
From:ITC
12
Input/Output defects
12.8
Operation relate to file
12.8.5
 Write to a file that has only been opened for reading
*/
#include<stdio.h>                                                                                                                  
void operation_relate_to_file_005() {
	FILE* fp;
	fp = (FILE*)fopen("x.txt", "r");
	char c = 'a';
	fputc(c, fp); /*Tool should detect this line as error*/ /*ERROR:input/output error*/
	fclose(fp);
}
