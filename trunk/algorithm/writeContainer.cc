// Algorithms that Write Container Elements
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator> // For back_inserter func
using namespace std;

// Print container elements
void printListInt( list<int> inputContainer ){
	for(list<int>::iterator iter= inputContainer.begin();iter!=inputContainer.end();++iter){
		cout << *iter << endl ;
	}
}

int write_container_by_fill( list<string> & l, const string & s ) {
	fill( l.begin(), l.end(), 5 ) ;
	// appends 5 elements to l
	fill_n( back_inserter( l ), 5, "b" ) ;

	return 0 ;
}

int write_container_by_copy( const vector<int> & ivec, list<int> & ilst ) {
	copy( ivec.begin(), ivec.end(), back_inserter(ilst) ) ;
	// better way to copy elements from ivec
	//list<int> ilst( ivec.begin(),ivec.end() )
	printListInt( ilst ) ;
	return 0 ;
}

//int main() {
//	list<string> l ;
//	const string s("a") ;
////	write_container_by_fill( l, s ) ;
//	list<int> ilst ;
//	vector<int> ivec ;
//	ivec.push_back(1) ;
//	ivec.push_back(2) ;
//	write_container_by_copy( ivec, ilst ) ;
//	return 0 ;
//}
