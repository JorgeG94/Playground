#include <iostream>
#include <cmath>

using namespace std;

int main(){

	 float a;
	 float p = 5000000; //initial investment
	 float r = 0.03; //interest

	 for(int year = 1; year <= 10; year++){
	 	a = p*pow(1+r, year);
		cout << year << " ----  " << a << endl;
	 }


	return 0;
}
