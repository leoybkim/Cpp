#include <iostream>			// standard < >
#include "Utils.h"	// user defined file " " 
					// but in practice you can use either
using namespace std;

void hello(); // prototype

int main () {
	hello();
	hello2();
	return 0;
}

void hello () {
	cout << "Hi" << endl;
}

void hello2 () {
	cout << "Hello World" << endl;
}	