#include "class1.h"
#include <iostream>
using namespace std;
// deconstructors
int main(){
	
	const int x=3; //variable that will not be modified 
	//const objects need const functions
	test testobj;
	testobj.printshiz();

	const test conobj;
//	conobj.printshiz(); // will give you error message
	conobj.printconstant();
	
	return 0;
}

