#include <iostream>
using namespace std;
// arrays 

int main(){
/*
	Constructing arrays by hand
	int jorge[5] = {1,2,3,4,5};
	cout << jorge[0] << endl;
*/

	int jorge[90];
	cout << "Element  -  Value " << endl;

	for(int x = 0; x<=89 ; x++){
		jorge[x] = 1; 
		cout << x << " ------  " << jorge[x] << endl; 
	}
	return 0;
}
