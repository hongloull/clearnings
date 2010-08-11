// String operations
#include <iostream>
#include <string>
using namespace std;

// Add elements to container by push_front or push_back or insert
int printString(){
	string s("helloworld!") ;
	string::iterator iter = s.begin() ;
	while( iter != s.end() ){
		cout << *iter << endl ;
		++iter ;
	}
	return 0 ;
}

int initString(){
    char *cp = "Hiya";            // null-terminated array
    char c_array[] = "World!!!!"; // null-terminated
    char no_null[] = {'H', 'i'};  // not null-terminated
    string s1(cp);             // s1 == "Hiya"
    string s2(c_array, 5);     // s2 == "World"
    string s3(c_array + 5, 4); // s3 == "!!!!"
//    string s4(no_null);        // runtime error: no_null not null-terminated
    string s5(no_null, 2);     // ok: s5 == "Hi"
    return 0 ;
}

//int stringOnlyOperations(){
//    string s("hello world");
//    // return substring of 5 characters starting at position 6
//    string s2 = s.substr(6, 5);   // s2 = world
//
//    // return substring from position 6 to the end of s
//    string s3 = s.substr(6);      // s3 = world
//
//    string s("C++ Primer");        // initialize s to "C++ Primer"
//    s.append(" 3rd Ed.");          // s == "C++ Primer 3rd Ed."
//    // equivalent to s.append(" 3rd Ed.")
//    s.insert(s.size(), " 3rd Ed.");
//
//    // starting at position 11, erase 3 characters and then insert "4th"
//    s.replace(11, 3, "4th");          // s == "C++ Primer 4th Ed."
//    // equivalent way to replace "3rd" by "4th"
//    s.erase(11, 3);                   // s == "C++ Primer Ed."
//    s.insert(11, "4th");              // s == "C++ Primer 4th Ed."
//
//    string name("AnnaBelle");
//    string::size_type pos1 = name.find("Anna"); // pos1 == 0
//    string lowercase("annabelle");
//    pos1 = lowercase.find("Anna"); // pos1 == npos
//
//    string numerics("0123456789");
//    string name("r2d2");
//    string::size_type pos = name.find_first_of(numerics);
//    cout << "found number at index: " << pos
//         << " element is "  << name[pos] << endl;
//
//    return 0 ;
//}

int searchAll( string & inputStr, string & target ) {
	string::size_type pos = 0 ;
	while ( (pos = inputStr.find_first_of( target,pos )) != string::npos ) {
		cout << "pos:" << pos << endl ;
		cout << "element:" << inputStr[pos] << endl ;
		++pos ;
	}
	return 0 ;
}

//int main() {
////	printString() ;
//	string inputStr("r2d2") ;
//	string target("0123456789") ;
//	searchAll( inputStr, target ) ;
//	return 0 ;
//}
