// A const_iterator should not be confused with an iterator that is const
#include <string>
#include <vector>
using namespace std;

void const_iterator_and_const_space_iterator() {
	vector<string> text(5,"a") ;
	for (vector<string>::const_iterator iter = text.begin();
			iter != text.end(); ++ iter) {
		//*iter = " ";     // error: *iter is const
		continue ;
	}

    vector<int> nums(10);  // nums is nonconst
    const vector<int>::iterator cit = nums.begin();
    *cit = 1;               // ok: cit can change its underlying element
    //++cit;                  // error: can't change the value of cit

}

//int main() {
//	const_iterator_and_const_space_iterator() ;
//	return 0 ;
//}
