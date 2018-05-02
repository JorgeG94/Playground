#include <iostream>
using namespace std;

int main(){

	int jorge[5];
	int *jg0 = &jorge[0];
	int *jg1 = &jorge[1]; 
	int *jg2 = &jorge[2];

	cout << "jg0 is at " << jg0 << endl;
	cout << "jg1 is at " << jg1 << endl;
	cout << "jg2 is at " << jg2 << endl;
	// they are 4 bytes apart

	jg0 += 1;

	cout << "jg0 is now at " << jg0 << endl;

	// whenever you add integers to a pointer it doesn't change the memory address, just the element you point to

	return 0;
}
