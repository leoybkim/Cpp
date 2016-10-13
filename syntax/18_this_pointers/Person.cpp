#include <sstream>
#include "Person.h"

Person::Person() {
	age = 0;
	name = "";
}

// when the variables have the same name
// you can differentiate them by using this keyword
Person::Person(string name, int age) {
	this->name = name;

	cout << "memory location of the object: " << this << endl;

	this->age = age;

	cout << "memory location of the object: " << this << endl;
}

string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
	return ss.str();
}
 
