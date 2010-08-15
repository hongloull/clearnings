// Reading an Unknown Number of strings
#include <string>
#include <iostream>
using namespace std;

void read_unknow_number_string() {
	string word ;
	// read until end-of-file, writing each word to a new line
	while( cin >> word) {
		cout << word << endl ;
	}
}

//int main() {
//	read_unknow_number_string() ;
//	return 0 ;
//}
