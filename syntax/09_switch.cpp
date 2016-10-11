#include <iostream>
using namespace std;

int main () {
	int day = 0;
	
	// You can't use variables or strings for your case labels
	switch (day) {
		case 1:
			day = 2;
			cout << "Today you will workout your " << day << endl;
			break;
		case 2:
			day = 1;
			cout << "Today wou will workout your " << day << endl;
			break;
		default:
			day = 1;
			cout << "eVerYDAY LeG DAY!" << endl;	
	}
	
	return 0;	
}
