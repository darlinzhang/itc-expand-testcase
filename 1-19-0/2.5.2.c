/*
From:ITC
2
Dynamic memory defects
2.5
Deletion of data structure sentinel
2.5.2
Not leaving a place for '\0' using memcpy function
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deletion_of_data_structure_sentinel_002()
{
	char str1[] = " This is a string ";
	char str[17];
	memcpy(str, str1, strlen(str1) + 1); /*Tool should Not detect this line as error*/ /*No ERROR:Deletion of a data structure sentinel*/
}
