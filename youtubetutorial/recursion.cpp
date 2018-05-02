#include <iostream>

using namespace std;

// recursion
// base case (ending point for the recursion)

unsigned long long int factorial(int x){
	if(x==1){
		return 1;
	}else{
		return x*factorial(x-1);
	}
}


int main(){

	int x = 60;
	cout << factorial(x) << endl;
	return 0;
}
