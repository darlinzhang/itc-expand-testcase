/*
From:ITC
10
Simple type defects
10.4
unsigned
10.4.1
addition between two signed int
*/
#include<stdio.h>                                                                                                    
#include<limits.h>                                     
void func_001(unsigned int ui_a, unsigned int ui_b) {
	unsigned int usum = ui_a + ui_b;/*Tool should detect this line as error*/ /*ERROR:Simple type error*/
	/* ... */
}
void unsigned_001() {
	unsigned int a;
	unsigned int b;
	printf("输入两个无符号整数:");
	scanf("%d %d", &a, &b);
	func_001(a, b);
} 
