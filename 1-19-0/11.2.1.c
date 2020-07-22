/*
From:ITC
11
STL defects
11.2
useless calls
11.2.1
push_back a null
*/
#include<iostream>	
using namespace std;	
#include<vector>
void useless_call_001() {
	vector<int>v = { 0 };
	v.push_back(1);/*Tool should Not detect this line as error*/ /*ERROR:STL error*/
}