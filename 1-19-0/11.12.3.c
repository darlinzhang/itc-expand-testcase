/*
From:ITC
11
STL defects
11.12
"Read empty container
"
11.12.3
read empty list
*/
#include <iostream> 
#include <list>                                                                                                                        
using namespace std;                                                                                                        
void read_empty_containers_003() {
	list<int>l;
	l.push_back(5);
	cout << "First number: " << *l.begin() << "\n";// /*Tool should Not detect this line as error*/ /*ERROR:STL error*/
}