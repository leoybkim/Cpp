#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Leo";
	int age = 22;

 	stringstream ss;	

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
		
	cout << ss.str() << endl;	

	return 0;
}
