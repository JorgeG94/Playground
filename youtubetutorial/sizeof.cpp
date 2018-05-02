#include <iostream>
using namespace std;
// size of things in bytes
int main(){
/*
	double c;
	cout << sizeof(c) << endl;
*/

	double jorge[10];
	cout << sizeof(jorge) << endl;

	cout << sizeof(jorge) / sizeof(jorge[0]) << endl;
	return 0;
}
