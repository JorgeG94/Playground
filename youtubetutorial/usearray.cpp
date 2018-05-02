#include <iostream>
using namespace std;

int main(){

	int tuna[5] = {1,2,3,4,5};	
	int sum = 0; // sum of array
	
	for(int x = 0; x<=4; x++){
		sum += tuna[x];
	}
	cout << sum << endl;
	return 0;
}
