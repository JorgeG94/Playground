#include <iostream>

using namespace std;
//scope of variables
 
// outside definition (every function can access this variable)
// global variable 
int x = 20; 

int main(){
			 	 // local variable 
	double x = 69.5;
	// inside definition (only accessible to main)
	cout << ::x << endl; 
	// the :: forces the program to use the global variable
	cout << x << endl;
	return 0;
}













/*
void jorge(){
	cout << x << endl;
}
*/
