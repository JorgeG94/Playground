#include "class1.h"
#include <iostream>


using namespace std; 

// :: binary resolution operator

test::test(){
	cout << "I am the constructor" << endl;
}

test::~test(){
	cout << "I am the deconstructor " << endl;
} // no return value, no overload (only one), no parameters

void test::printcrap(){
	cout << "print crap" << endl;
}
