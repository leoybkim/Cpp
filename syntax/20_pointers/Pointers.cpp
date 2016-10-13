#include <iostream>
using namespace std;


void manipulate(int value) {
	cout << "2. dvalue of double in manipulate: " << value << endl;
	value = 10;
	cout << "3. dvalue of int in manipulate: " << value << endl;
}

void manipulate2(double *pvalue) {
	cout << "2. dvalue of double in manipulate: " << *pvalue << endl;
	*pvalue = 10.5;
	cout << "3. dvalue of double in manipulate: " << *pvalue << endl;
}

int main() {
	int nvalue = 8;
	nvalue = 9;

	// int pointer
	// holds the address of value
	// *pValue dereferences
	int *pnValue = &nvalue;
	
	cout << "Integer value: " << nvalue << endl; 
	cout << "Pointer to integer address: " << pnValue << endl; 
	cout << "Integer value via pointer: " << *pnValue << endl;
	
	cout << "==========================" << endl;

	double dvalue = 1.23;
	cout << "1. dvalue: " << dvalue << endl;
	manipulate(dvalue);
	cout << "4. dvalue: " << dvalue << endl;

	cout << "1. dvalue: " << dvalue << endl;
	manipulate2(&dvalue);
	cout << "4. dvalue: " << dvalue << endl;

	return 0;
}
