#include <iostream>
using namespace std;

int main(){
	
	int x = 10;

	x += 5; // x = 10 + 5, works with -, /, %, * 
	// assignment operators	
	cout << ++x << endl;
	// ++x adds 1 first and then runs it
	// x++ runs line of code and then adds 1

	cout << x << endl;

	return 0;
}
