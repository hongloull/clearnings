// Printing the Elements of an Array
#include <iostream>
#
using namespace std ;

template <typename T>
void print_element_of_array ( T &inputArray, const size_t arr_sz) {
	//cout << sizeof( inputArray ) << endl ;
	for ( size_t index = 0; index != arr_sz; ++index ) {
		cout << inputArray[index] << endl ;
	}
}
