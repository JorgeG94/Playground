#include <iostream>

using namespace std;
// pointers / vectors
// pointer memory address
int main(){

	int fish = 5;
	cout << &fish << endl; // & address operator
	
	int *fishpointer; // we are making a pointer
	fishpointer = &fish;
	// not equal to 5, but to the memory address
	cout << fishpointer << endl;
	
	return 0;
}
