/*
From:ITC
11
STL defects
11.2
useless calls
11.2.7
erase empty map iterator point to begin
*/
#include<iostream>	
using namespace std;	
#include<map>void useless_call_007() {
	map<int, string>m;
	map<int, string>::iterator it = m.begin();
	m.erase(it);/*Tool should detect this line as error*/ /*ERROR:STL error*/
	m[1] = ""one"";
	m[2] = ""two"";
}
