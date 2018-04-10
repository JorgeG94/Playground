#include <iostream>
#include <cmath>
#include <vector>

// Find the sum of all the primes below two million.	
// Needs the implementation of the sieve of erathostenes
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
		std::cout << n << std::endl;
		result.push_back(n);

		}
	}
			unsigned size = result.size();
			//std::cout << size << std::endl;
			for(int i=0; i < size; i++){
				valor += result[i];
			}
			std::cout << valor << std::endl;
return 0;
}
