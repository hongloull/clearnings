// String operations
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

// Add elements to container by push_front or push_back or insert
int dereferenceMapIterator() {
	vector<string> vector_str(5,"test") ;
	map<int,string>::iterator map_it = words.begin() ;
	cout << map_it->first << endl ;
	cout << map_it->second << endl ;

	return 0 ;
}

int main() {
	dereferenceMapIterator() ;
	return 0 ;
}
