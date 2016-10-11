#include <iostream>
#include <iomanip>	// used for manipulating the cout 

using namespace std;


int main () {

	// floats for decimal values!
	float fVal = 76.4;
	cout << "float: " << fVal << endl;
	cout << "fixed: " << fixed << fVal << endl;
	cout << "scientific: " << scientific << fVal << endl;
	cout << "sizeof(float): " << sizeof(float) << endl;

	// Be mindful of how precise you can be
	cout << "setprecision(20): " << setprecision(20) << fVal << endl;

	// double has double the precision of float
	// in general double has 15 to 16 decimal digits of precision
	// while float only has 7
	double dVal = 76.4;
	cout << "double: " << dVal << endl;
	cout << "fixed: " << fixed << dVal << endl;
	cout << "scientific: " << scientific << dVal << endl;
	cout << "sizeof(double): " << sizeof(double) << endl;
	cout << "setprecision(20): " << setprecision(20) << dVal << endl;

	// even more precise!
	long double lVal = 76.4;
	cout << "long double: " << lVal << endl;
	cout << "fixed: " << fixed << lVal << endl;
	cout << "scientific: " << scientific << lVal << endl;
	cout << "sizeof(long double): " << sizeof(long double) << endl;
	cout << "setprecision(20): " << setprecision(20) << lVal << endl;

	return 0;
}
