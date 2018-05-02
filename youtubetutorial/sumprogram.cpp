#include <iostream>
using namespace std;

int main(){

	int x = 1;
	int number;
	int total = 0;

	while(x<=5){
		cin >> number; //asks for a number 5 times	
		total = total + number;
		x++;
	}

	cout << total << endl;

	return 0;
}
