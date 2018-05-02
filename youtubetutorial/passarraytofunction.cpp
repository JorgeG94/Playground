#include <iostream>
using namespace std;
// pass array to a function

void printarray(int thearray[], int sizearray);


int main(){

	int tuna[3] = {1,2,3};
	int burrito[4] = {4,5,6,7};

	printarray(tuna, 3);
	return 0;
}
// when passing array to function use []
void printarray(int thearray[], int sizearray){
	
	for(int x = 0; x<sizearray; x++){
		cout << thearray[x] << endl;
	}
} 
