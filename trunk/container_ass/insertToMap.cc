// String operations
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int insertToMap() {
	//
	map<string,int> words_cout ;
	string word ;
	while(cin>>word){
		// If word already in word_count, insert does nothing
		pair< map<string,int>::iterator, bool > ret = words_cout.insert( make_pair( word,1) ) ;
		cout << ret.second << endl ;
		if ( !ret.second ){ // word already in word_count
			++ret.first->second ;
			//++((ret.first)->second); // equivalent expression
		}
	}
	return 0 ;
}

//int main() {
//	insertToMap() ;
//	return 0 ;
//}
