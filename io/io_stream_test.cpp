// IO stream example
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std ;

//int main() {
//	string s ;
//	// Read cin and test only for EOF
//	while ( cin >> s, !cin.eof() ) {
//		if ( s.length() <= 3 ) {
//			throw runtime_error( "Input string length must be more than 3.") ;
//		}
//		else if( cin.bad() ) {
//			throw runtime_error( "IO stream corrupted.") ;
//		}
//		else if( cin.fail() ) {
//			cerr << "bad data, try again" ;
//			// Reset the stream
//			cin.clear( istream::failbit ) ;
//			continue ;
//		}
//		else {
//			cout << s << endl ;
//		}
//	}
//	return 0;
//}
