# include <iostream>	// This calls a header file that is part of the C++ standard library
			// It allows cin cout cerr clog
			// C didn't have special syntax for streaming data input or output
			// C equivalent would be #include <stdio.h>

using namespace std;	// Standard namespace
			// For example, string is interpreted as std::string, cout as std::cout

// int is a type declaration
// main is the name of the subroutine
int main () {

	// cout means console output
	// double arrow indicates insertion operator
	// endl means end line, acts like a new line character
	cout << "Hello World" << endl;
	
	cout << "Did you know that..." << flush;
	cout << "flush doesn't append carriage return?" << endl;
	cout << "Bench - " << "Deadlift - " << "Squats" << endl;
	
	return 0;	// zero means no error
}

// g++ 01_hello_world.cpp 
// ./a.out 
