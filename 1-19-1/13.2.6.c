/*
From:ITC
13
"API defects
"
13.2
Memset function
13.2.6
 Structure array as parameter
*/
#include <stdio.h>
#include<memory.h>
struct stu {
	char name[20];
	int age;
	char sex;
};
void memset_function_006() {
	struct stu s[2] = { {"zhangsan",17,"��"},{"lisi",17,"��"} };
	memset(s, 0, sizeof(struct stu));  /*Tool should detect this line as error*/ /*ERROR:API error*/
	printf("%d", s[1].age);
}
