/*
From:ITC
13
API defects 
13.1
Invalid function arg
13.1.12
"Warn on uses of the ��rand��, ��random��, and related functions"
*/
#include<stdlib.h>
void invalid_function_arg_012() {
	int i=random(0,10); /*Tool should detect this line as eror*/ /*ERROR: API error*/
}
