#include <iostream>
#include "Person.cpp"

using namespace std;

int main() {

	Person person1;
	Person person2("Leo", 22);
	Person person3("Yubin", 22);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;


	return 0;
}
