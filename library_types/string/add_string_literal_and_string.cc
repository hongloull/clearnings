// Adding Character String Literals and strings
#include <string>
using namespace std;

void add_string_literal_and_string() {
	//When mixing strings and string literals, \
	//at least one operand to each + operator must be of string type
	string s1 = "hello";   // no punctuation
	string s2 = "world";
	string s3 = s1 + ", ";           // ok: adding a string and a literal
//	string s4 = "hello" + ", ";      // error: no string operand
	string s5 = s1 + ", " + "world"; // ok: each + has string operand
//	string s6 = "hello" + ", " + s2; // error: can't add string literals

}

//int main() {
//	add_string_literal_and_string() ;
//	return 0 ;
//}
