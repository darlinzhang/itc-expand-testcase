/*
From:ITC
11
STL defects
11.4
"STLsctr
"
11.4.2
data() function error
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;                                                                                                             
void STL_sctr_002() {
	string s = "hello";
	string S = s.data();/*Tool should Not detect this line as error*/ /*ERROR:STL error*/
	cout << S;
}