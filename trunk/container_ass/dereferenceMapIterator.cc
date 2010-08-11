// String operations
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

// Add elements to container by push_front or push_back or insert
int dereferenceMapIterator() {
	map<int,string> words ;
	// insert key and value
	words[1] = "a" ;
	// Insert key and value
	words.insert( map<int,string>::value_type( 2, "b") ) ;
	// Using make_pair to insert
	words.insert( make_pair( 3, "c") ) ;
	// Using typedef to insert
	typedef map<int,string>::value_type map_value ;
	words.insert( map_value( 4, "d") ) ;

	map<int,string>::iterator map_it = words.begin() ;
	while( map_it != words.end() ){
		cout << map_it->first << " " ;
		cout << map_it->second << endl ;
		++map_it ;
	}

	return 0 ;
}

int main() {
	dereferenceMapIterator() ;
	return 0 ;
}
