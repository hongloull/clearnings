// Count how many names are in both lists
#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

// Count how many names are in both lists
int countNamesInBothLists( list<string> & list1, list<string> & list2 ) {
	size_t count = 0 ;
	list<string>::iterator iter = list1.begin() ;
	while (  iter != list1.end() ) {
		iter = find_first_of( iter, list1.end(), list2.begin(), list2.end() ) ;
		cout << count ;
		++count ;
		++iter ;
	}

	return 0 ;
}

int main() {
	list<string> list1;
	list<string> list2 ;
	list1.push_back("b") ;
	list2.push_back("c") ;
	countNamesInBothLists( list1, list2 ) ;
	return 0 ;
}
