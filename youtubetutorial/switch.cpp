#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int age = 15;

	switch(age){
		case 16: 
			cout << " 16 " << endl;
			break; // end the switch
		case 18: 
			cout << "18" << endl;
			break;
		case 21: 
			cout << "21" << endl;
			break;
		default:
			cout << "stupid" << endl;
	}

	return 0;
}
