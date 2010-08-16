// Constraints on Initialization of and Assignment to Pointers
//There are only four kinds of values that may be used to initialize or assign to a pointer:
//1. A constant expression with value 0
//2. An address of an object of an appropriate type
//3. The address one past the end of another object
//4. Another valid pointer of the same type

#include <string>
#include <vector>
#include <cstdlib> //#defines NULL to 0
using namespace std;

void init_pointer() {
	int *pi = 0 ;
	int ival;
	int zero = 0;
	const int c_ival = 0;
	//int *pi = ival; // error: pi initialized from int value of ival
	//pi = zero;      // error: pi assigned int value of zero
	pi = c_ival;    // ok: c_ival is a const with compile-time value of 0
	pi = 0;         // ok: directly initialize to literal constant 0
	pi = NULL; 		// ok: equivalent to int *pi = 0;
}

//int main() {
//	init_pointer() ;
//	return 0 ;
//}
