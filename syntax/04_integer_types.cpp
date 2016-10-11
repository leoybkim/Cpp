#include <iostream>
#include <limits>
using namespace std;

int main () {
	cout << "INT_MAX: " << INT_MAX << endl;
	cout << "INT_MIN: " << INT_MIN << endl;
			
	cout << "LONG_MAX: " << LONG_MAX << endl;
	cout << "LONG_MIN: " << LONG_MIN << endl;
						
	cout << "LLONG_MAX: " << LLONG_MAX << endl;
	cout << "LLONG_MIN: " << LLONG_MIN << endl;
	
	cout << "SHRT_MAX: " << SHRT_MAX << endl;
	cout << "SHRT_MIN: " << SHRT_MIN << endl;
	
	cout << "size(int) in bytes (bit x 8) : " << sizeof(int) << endl;
	cout << "size(short int) : " << sizeof(short int) << endl;
	cout << "size(long int) : " << sizeof(long int) << endl;
	cout << "size(long long) : " << sizeof(long long) << endl;
 
	// you can use unsigned int for large positive number

	return 0;
}

