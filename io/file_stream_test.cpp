//Read data from file
//Write data to file

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//read data from the file, Line By Line
//Use the C++ string getline() function to read lines into strings
void readLineFromFile(const string &fileName){
	ifstream inFile;
	inFile.open(fileName.c_str());
	if (!inFile) {
		cerr << "error: unable to open input file: " << fileName << endl ;
	}
	else{
		string s;
		while(getline(inFile,s)){
			cout << s << endl ;
		}
		inFile.close();
	}
}

//read data from the file, Word By Word
//when used in this manner, we'll get space-delimited bits of text from the file
//but all of the whitespace that separated words (including newlines) was lost.
void readWordFromFile(const string &fileName){
	ifstream inFile;
	inFile.open(fileName.c_str());
	if (!inFile) {
		cerr << "error: unable to open input file: " << fileName << endl ;
	}
	else{
		string s;
		while(inFile >> s){
			cout << s << " " ;
		}
		inFile.close();
	}
}

//Write data to file
void writeDataToFile(const string &fileName,const string &data){
	ofstream outFile;
	outFile.open(fileName.c_str());
	if (!outFile) {
		cerr << "error: unable to write to file: " << fileName << endl ;
	}
	else{
		outFile << data ;
		outFile.close();
	}
}

int main2() {
	// Relative path under eclipse workspace
	const string ifile = "src/io/data/file_stream_in.txt";
	const string ofile = "src/io/data/file_stream_out.txt";
	const string oData = "Line 1:write data to file test\nLine 2:";
	readLineFromFile(ifile);
//	readWordFromFile(ifile);
//	writeDataToFile(ofile,oData);
	return 0;
}
