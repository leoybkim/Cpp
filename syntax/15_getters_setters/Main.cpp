#include <iostream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

int main() {

	Person person;
	cout << person.toString() << endl;

	person.setName("Yubin");
	cout << person.toString() << endl;

	cout << person.getName() << endl;
	return 0;
}
