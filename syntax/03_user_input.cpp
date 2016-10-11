#include <iostream>

using namespace std;

int main () {

	cout << "Any movie suggestions? " << flush;
	
	string suggestion;

	// extraction operator
	// cin >> suggestion;
	// account for whitespace	
	getline(cin, suggestion);

	cout << "But I already watched " << suggestion << " ..."  << endl;
	
	return 0;  
}
