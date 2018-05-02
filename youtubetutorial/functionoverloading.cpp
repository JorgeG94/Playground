#include <iostream>

using namespace std;
// function overloading
void printNumber(int x){
	cout << "integer " << x << endl;
}

void printNumber(float x){
	cout << "float " << x << endl;
}



int main(){

	int a = 54;
	float b = 32.12312;

	printNumber(a);
	printNumber(b);

	return 0;
}



