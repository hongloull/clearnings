// Algorithms that Write Container Elements
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator> // For back_insert func
using namespace std;

int replace_element_by_replace( list<int> & ilst, const int & source, const int & target ) {
	replace( ilst.begin(), ilst.end(), source, target ) ;
	list<int> ilst_tmp ;
	replace_copy( ilst.begin(), ilst.end(), back_inserter( ilst_tmp ), source, target ) ;
	return 0 ;
}

//int main() {
//	list<int> ilst ;
//	ilst.push_back(1) ;
//	ilst.push_back(2) ;
//	const int source = 1 ;
//	const int target = 2 ;
//	replace_element_by_replace( ilst, source, target ) ;
//	return 0 ;
//}
