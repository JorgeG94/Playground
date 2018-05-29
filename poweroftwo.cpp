#include <iostream> 
#include <cmath> 
#include <string>
using namespace std;

int main(){

	long double x; 
	string var;
	int sum;

	x = pow(2,1000);
	var = to_string(x);
	
	for(int i=0; i < var.length()-7;i++){
		sum += ((int) var[i] - 48);
		cout << var[i] << " " << sum << endl;
	}
	cout << sum << endl;
	return 0;
}
