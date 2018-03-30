#include <iostream>
#include <cmath>
#include <vector>

using std::vector;

//Find the difference between the sum of the squares 
//of the first one hundred natural numbers and the square of the sum.

int main(){

	vector<int> sqsum;

	vector<int> sumsq;
	for(int n=1; n<=100;n++){
		
		int xsqsum;

		int xsumsq; 

		xsqsum = n;

		xsumsq = pow(n,2);

		sqsum.push_back(xsqsum);

		sumsq.push_back(xsumsq);

	}

	unsigned valorsqsum = 0.0;
	for(int i = 0; i < sqsum.size(); i++){
		valorsqsum += sqsum[i];
		//
	}
	valorsqsum = pow(valorsqsum,2);
	unsigned valorsumsq = 0.0;
	for(int j = 0; j < sumsq.size(); j++){
		valorsumsq += sumsq[j];
	}

	unsigned valfinal = 0;
	valfinal = valorsqsum - valorsumsq;
	std::cout << valfinal << std::endl;
return 0;
}