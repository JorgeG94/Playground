#include <iostream>
#include <cmath>
#include <vector>

// What is the 10 001st prime number?

using std::vector;


bool isprime(int n){

	bool prime = true;

	for(int r=2; r<=n/2;r++){
		if (n%r == 0){
			prime = false;
			break;
		}
	}
	return prime;	
}

int main(){
	int dum = 0;
	bool is = true;
	int nmax = 2000000;
	vector<int> result;
	unsigned valor = 0;

	for(int n=2;n<=nmax;n++){

		is = isprime(n);

		if (is){ 
		
		result.push_back(n);
		unsigned size = result.size();
			if(size == 10001){
				valor = n;
				std::cout << valor << std::endl;
				break;
			}
		}
	}	
return 0;
}