/*
From:ITC
3
Inappropriate code
3.1
Dead code
3.1.3
 if statement is the return of function
*/
int dead_code_003_func_001()
{
	return 1;
}

void dead_code_003()
{
	int a = 0;
	int ret;
	if (dead_code_003_func_001())
	{
		a++; /*Tool should not detect this line as error*/ /*No ERROR:Dead Code*/
	}
	ret = a;
	sink = ret;
}
"
