#include "class1.h"
#include <iostream>
using namespace std;
// arrow member selection operator
int main(){
	
	test testobject;
	testobject.printcrap();

	// you can access by making a pointer to the object
	test *testpointer = &testobject;

	testpointer -> printcrap();
	
	// now we have two different ways to access a class
	return 0;
}

