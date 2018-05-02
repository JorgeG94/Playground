#include <iostream>
using namespace std;

int main(){

	int age;
	int agetotal = 0;
	int numberofpeople = 0;

	cout << "Enter first persons age or -1 to quit" << endl;
	cin >> age;
	
	while(age!=-1){
		agetotal = agetotal + age;
		numberofpeople++;

		cout << "Enter next persons age or -1" << endl;
		cin >> age;
	}

	cout << "# of people entered " << numberofpeople << endl;

	cout << "avergage age " << agetotal/numberofpeople << endl;

	return 0;
}
