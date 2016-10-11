#include <iostream>
using namespace std;

int main () {
	
	// 4 x 3 array (w x h)
	// you can also do [][4] but not [3][]
	string workout[3][4] = {
		{"dumbbell curls", "tricep pushdown", "face pulls"},
		{"high bar squats", "front squats", "deadlifts"},
		{"incline press", "barbell row", "lat pulldown"}
	};
	
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			cout << workout[i][j] << "     " << flush;
		}
		cout << endl;
	}
	
	cout << endl;
	
	int table[9][9];

	for (int a=0; a < sizeof(table)/sizeof(table[0]); a++) {
		for (int b=0; b < sizeof(table[0])/sizeof(int); b++) {
			table[a][b] = a*b;	
			cout << table[a][b] << "    " << flush;
		}
		cout << endl;
	}	

	return 0;
}
