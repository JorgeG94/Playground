#include <iostream>
using namespace std;

/*
Passing an argument: giving a function a value that needs to calcualte
	Pass by value: Creating a function and giving a copy of the variable to the function, the original variable will not be updated or changed until set equal to new value.

	Pass by reference: You pass the memory address of the variable and the function has direct access to the variable. Less stress to the computer. It does not need to copy the variable.
*/

void passbyvalue(int x);
void passbyreference(int *x); 


int main(){	
	int betty = 13; // pass by value
	int sandy = 13; // pass by reference

	passbyvalue(betty);
	passbyreference(&sandy);

	cout << "betty " << betty << endl;
	cout << "sandy " << sandy << endl;


	return 0;
}

void passbyvalue(int x){
	x = 99;
}

void passbyreference(int *x){
	*x = 66;
}
