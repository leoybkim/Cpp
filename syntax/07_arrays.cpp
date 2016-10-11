#include <iostream>
using namespace std;

int main () {
	
	int numbers[10];
	numbers[0] = 11;
	numbers[1] = 12;
	numbers[3] = 13;
	numbers[4] = 15;	

	int size = sizeof(numbers)/sizeof(int);

	for(int i=4; i<size; i++) {
		numbers[i] = i + 10;
		cout << numbers[i] << " " << flush;	
	}
	
	cout << endl;
	// This will give you warning but it will go through ... wow
	// numbers[10] = 100;	
	// cout << numbers[10] << endl;
	
	double decimals[5] = { 1.5, 2.0, 3.0, 4.0, 5.0 };
	
	for(int i=0; i<5; i++) {
		cout << "@ index " << i << ": " << decimals[i] << endl;	
	}

	string words[] = { "dips", "pullups", "lunges" };
	int length = sizeof(words)/sizeof(string);
	cout << "The length of the array words: " << length << endl;	

	int empty[3] = { };
	cout << "What does empty index print?: " << empty[0] << endl;	

	return 0;	
}
