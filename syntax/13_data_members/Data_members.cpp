#include <iostream>
#include "Cat.h"
#include "Cat.cpp"

using namespace std;

int main() {
	cout << "Hello World!" << endl;

	Cat snowball;
	Cat grumpy;

	snowball.happy = true;
	snowball.speak();

	grumpy.happy = false;
	grumpy.speak();

	snowball.setAge(2);

	cout << snowball.getAge() << endl;

	// cat.
	return 0;
}