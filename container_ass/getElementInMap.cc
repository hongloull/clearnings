// String operations
#include <iostream>
#include <string>
#include <map>
using namespace std;

int getElementInMap ( map<string,int> & words_cout, const string & word ) {
	int w ;
	map<string,int>::iterator iter = words_cout.find( word ) ;
	if( iter != words_cout.end() ) {
		w = iter->second ;
		cout << w ;
	}

	return 0 ;
}

//int main() {
//	const string word = "b" ;
//	map<string,int> words_cout ;
//	words_cout["a"] = 1 ;
//	words_cout["b"] = 2 ;
//	getElementInMap( words_cout, word ) ;
//	return 0 ;
//}
