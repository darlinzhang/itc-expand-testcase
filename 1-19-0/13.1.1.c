/*
From:ITC
13
API defects 
13.1
Invalid function arg
13.1.1
 passed-by-value arg contain uninitialized data
*/
void f1(struct S s) {
	int y = s.x;
	return y;
}
void invalid_function_arg_001() {
	struct S s = { 3 };
	f1(s); /*Tool should  Not detect this line as error*/ /*NO ERROR:API error*/
}
