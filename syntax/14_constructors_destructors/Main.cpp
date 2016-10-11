#include <iostream>
#include "Dog.h"
#include "Dog.cpp"

using namespace std;

int main() {
	Dog cookie;
	cookie.bark();

	// rarely used but you can also do this
	{
		Dog spot;
		spot.bark();
	}
	// on closing curly bracket, all memory associated will be destroyed
	// aka call destructor

	cookie.bark();
	
	// out of scope
	// spot.bark();

	return 0;
}

