// Search Elements in Container
#include <list>
#include <iostream>
#include <string>
#include <algorithm> // For use find() function
using namespace std;

// Print container elements
void printContainerElements( list<string> inputContainer ){
	for(list<string>::iterator iter= inputContainer.begin();iter!=inputContainer.end();++iter){
		cout << *iter << endl ;
	}
}

// Search elements in container by find()
list<string> searchElementsInContainer( list<string> & inputList, string & targetStr){
	// Search elements
	list<string> returnList ;
	list<string>::iterator iter = find( inputList.begin(), inputList.end(), targetStr ) ;
	if(iter!=inputList.end()){
		returnList.push_back( *iter ) ;
	}
	return returnList ;
}

// Erase elements in container by find()
list<string> eraseElementsInContainer( list<string> & inputList, string & targetStr){
	// Search elements
	list<string>::iterator iter = find( inputList.begin(), inputList.end(), targetStr ) ;
	// Erase elements
	if(iter!=inputList.end()){
		inputList.erase( iter ) ;
	}
	return inputList ;
}

// Init container
list<string> initStrList( list<string>::size_type & size_t, string & inputStr ){
	list<string> returnStrList( size_t, inputStr ) ;
	return returnStrList ;
}

//int main() {
//	string initValue("test") ;
//	list<string>::size_type size_t = 5 ;
//	list<string> sourceStrList = initStrList( size_t, initValue ) ;
//	string searchValue("test");
////	printContainerElements( searchElementsInContainer( sourceStrList, searchValue ) ) ;
//	printContainerElements( eraseElementsInContainer( sourceStrList, searchValue ) ) ;
//	return 0 ;
//}
