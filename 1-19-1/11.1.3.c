/*
From:ITC
11
STL defects
11.1
Deref invalid iterator
11.1.3
list use vector container iterator
*/
#include<List>                                                                                                                        
#include<vector>                                                                                                               
void invalid_iterator_003() {
	list<int>l;
	l.push_back(1);
	l.push_back(2);
	vector<int>::iterator it;/*Tool should detect this line as error*/ /*ERROR:STL error*/
	for (it = l.begin(); it < l.end(); ++it) {
		cout << *it;
	}
}
