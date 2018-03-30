#include <iostream>
#include <cmath>
#include <vector>
/*
What is the smallest positive number that is evenly divisible by all
of the numbers from 1 to 20?
*/
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

int maxexp(int n, int nmax){
	int pre = 0;
	int test = 0;

	for(int r=1; r<=nmax;r++){

		test = pow(n,r);
		if(test >= nmax){
			pre = r - 1;
			break;
		}
		
	}		
return pre; 
}

int num(int n, int mexp){

int x = pow(n,mexp);

return x;	
}


int main(){
	int dum = 0;
	bool is = true;
	int nmax = 10;
	int mexp = 0;
	vector<int> result;

	for(int n=2;n<=nmax;n++){

		is = isprime(n);

		if (is){ 
		dum = n;
		mexp = maxexp(n,nmax);
		int expo;
		expo = num(n,mexp);
		result.push_back(expo);
		}
		
	}	

	double valor = 1.0;
	for(int i = 0; i < result.size(); i++){
		valor *= result[i];
	}
	std::cout << valor << std::endl;

return 0;
}
