// Init container by array
#include <list>
#include <iostream>
#include <string>
using namespace std;

int initContainerByArray(){
	char *words[] = {"abc","def","ghi","jklm","a"} ;
	// calculate how many elements in words
	int words_size = sizeof(words)/sizeof(char *) ;
	// use entire array to initialize list
	list<string> words_list(words, words + words_size) ;
	if(cout){
		for(list<string>::iterator iter=words_list.begin();iter!=words_list.end();++iter){
			cout << *iter << endl ;
		}
	}
	return 0 ;
}

//int main() {
//	initContainerByArray() ;
//}
