// Get the number of punctuation characters in a given string
#include <string>
#include <iostream>
using namespace std;

void get_number_of_punctuation_in_string() {
	//When mixing strings and string literals, \
	//at least one operand to each + operator must be of string type
	string s = "Hello World..." ;
	int count = 0 ;
	for( string::size_type i = 0; i != s.size(); ++i ) {
		if( ispunct(s[i]) ) {
			++count ;
		}
	}
	cout << count << endl ;
}

//int main() {
//	get_number_of_punctuation_in_string() ;
//	return 0 ;
//}
