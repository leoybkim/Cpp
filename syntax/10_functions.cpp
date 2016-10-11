#include <iostream>
using namespace std;

void yeller () {
	cout << "YOU CALLED ME?" << endl;
}

int adder (int a, int b) {
	return a + b;
}

int main () {
	yeller();
		
	int answer = adder(1, 2);
		
	if (answer == 1 + 2) {
		return 0;	
	} else {
		return 1;
	}
}
