// Init container by array
#include <list>
#include <iostream>
#include <string>
using namespace std;

// Print container elements
void printContainerElements( list<int> inputContainer ){
	for(list<int>::iterator iter= inputContainer.begin();iter!=inputContainer.end();++iter){
		cout << *iter << endl ;
	}
}

// Add elements to container by push_front or push_back or insert
list<int> addElementsToContainer(){
	list<int> ilist ;
	// Add elements at the end of ilist
	for(size_t ix = 0; ix != 4; ++ix){
		ilist.push_back(ix) ;
	}
	return ilist ;
}

//int main() {
//	printContainerElements( addElementsToContainer() ) ;
//	return 0 ;
//}
