// Reading an Unknown Number of strings
#include <string>
#include <iostream>
using namespace std;

void read_entire_line() {
	string line ;
	// read line at time until end-of-file
	while( getline( cin, line ) ) {
		cout << line << endl ;
	}
}

//int main() {
//	read_entire_line() ;
//	return 0 ;
//}
