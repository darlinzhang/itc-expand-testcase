/*
From:ITC
2
Dynamic memory defects
2.5
Deletion of data structure sentinel
2.5.1
Not leaving a place for '\0'
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deletion_of_data_structure_sentinel_001()
{
	char *foo;
	int counter;
	foo = calloc(11, sizeof(char));
	for (counter = 0; counter < 10; counter++)
	{
		foo[counter] = 'a'; /*Tool should Not detect this line as error*/ /*No ERROR:Deletion of a data structure sentinel*/
	}
	foo[counter] = '\0';
	free(foo);
}
