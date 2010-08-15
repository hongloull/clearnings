// Eliminate duplicates in container
#include <vector>
#include "container_funcs.h" // Custom container funcs
using namespace std;

template <typename T>
T & eliminate_duplicate( T & inputContainer ) {
	sort( inputContainer.begin(), inputContainer.end() ) ;
	typename T::iterator end_unique = unique( inputContainer.begin(), inputContainer.end() ) ;
	inputContainer.erase( end_unique, inputContainer.end() ) ;

	return inputContainer ;
}

//int main() {
//	vector<string> ivec ;
//	ivec.push_back("b") ;
//	ivec.push_back("a") ;
//	ivec.push_back("a") ;
//	ivec = eliminate_duplicate( ivec ) ;
//	printConatainerElements( ivec ) ;
//	return 0 ;
//}
