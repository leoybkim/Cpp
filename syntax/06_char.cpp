#include <iostream>
using namespace std;

int main () {
	// Takes up just one byte of memory
	cout << "sizeof(char)" << sizeof(char) << endl;
	char cVal = 55;
	cout << "char cVal = 55; is assigning ASCII 55. Actual value is character: " << cVal << endl;
	cVal = '7';
	cout << "char cVal = '7' is assigning character: " << cVal << endl; 

	// To get the position of the ASCII
	wchar_t wVal = '7';
	cout << "wVal: " << wVal << endl;
	cout << "(char)wVal: " << (char)wVal << endl;

	return 0;
}
