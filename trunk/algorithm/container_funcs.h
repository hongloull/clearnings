#include <iostream>
using namespace std ;

template <typename T>
// Func Template for print container elements
void printContainerElements( const T &inputContainer ) {
	for ( typename T::iterator iter = inputContainer.begin(); iter != inputContainer.end(); ++iter ) {
		cout << *iter ;
	}
}
