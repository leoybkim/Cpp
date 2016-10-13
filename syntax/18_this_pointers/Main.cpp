#include <iostream>
#include "Person.cpp"

using namespace std;

int main() {

	Person person1;
	Person person2("Leo", 22);
	Person person3("Yubin", 22);

	cout << person1.toString() << "; memory location: " << &person1 << endl;
	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;


	return 0;
}
