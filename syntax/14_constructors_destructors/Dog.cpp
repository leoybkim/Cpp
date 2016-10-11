#include <iostream>
#include "Dog.h"

using namespace std;

//Object::Constructor name which is same as class name
Dog::Dog() {
	cout <<  "New dog" << endl;
	happy = true;
}

Dog::~Dog() {
	cout << "Dog killed... oh no bye bye" << endl;
}

void Dog::bark() {
	if (happy) {
		cout << "Warf!" << endl;
	} else {
		cout << "Grrrrrrrrgh" << endl;
	}
}

