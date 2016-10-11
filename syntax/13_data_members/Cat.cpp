#include <iostream>
#include "Cat.h"

using namespace std;

// Cat:: tells that speak() is member of Cat object
void Cat::speak() {
	
	if (happy) {
		cout << "Meow" << endl;
	} else {
		cout << "MEOOOOOOOOOOOW Ssccccchhhh" << endl;
	}
}

void Cat::setAge(int i) {
	age = i;
}

int Cat::getAge() {
	return age;
}