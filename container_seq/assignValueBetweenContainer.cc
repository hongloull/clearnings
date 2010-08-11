// Assign other container's elements to one container
#include <list>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Print container elements
void printContainerElements( vector<string> & inputContainer ){
	for(vector<string>::iterator iter= inputContainer.begin();iter!=inputContainer.end();++iter){
		cout << *iter << endl ;
	}
}

int assignValueBetweenContainer(){
	char *words[] = {"abc","def","ghi","jklm","a"} ;
	// calculate how many elements in words
	int words_size = sizeof(words)/sizeof(char *) ;
	// use entire array to initialize list
	list<string> words_list(words, words + words_size) ;

	//
	vector<string> string_vector(10,"a") ;
	// Assign words_list to string_vector
	string_vector.assign( words_list.begin(), words_list.end() ) ;
	// "assign" function have two types, the other is:
//	string_vector.assign( 10, "b" ) ;

	// Print string_vector
	printContainerElements( string_vector ) ;

	return 0 ;
}

//int main() {
//	assignValueBetweenContainer() ;
//}
