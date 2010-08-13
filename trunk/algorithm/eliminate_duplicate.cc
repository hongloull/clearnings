// Algorithms that Write Container Elements
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator> // For back_inserter func
using namespace std;
extern void printListInt( list<int> inputContainer ) ;

int write_container_by_copy_2( const vector<int> & ivec, list<int> & ilst ) {
	copy( ivec.begin(), ivec.end(), back_inserter(ilst) ) ;
	// better way to copy elements from ivec
	//list<int> ilst( ivec.begin(),ivec.end() )
	printListInt( ilst ) ;
	return 0 ;
}

int main() {
	list<string> l ;
	const string s("a") ;
//	write_container_by_fill( l, s ) ;
	list<int> ilst ;
	vector<int> ivec ;
	ivec.push_back(1) ;
	ivec.push_back(2) ;
	write_container_by_copy_2( ivec, ilst ) ;
	return 0 ;
}
