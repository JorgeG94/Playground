#include <iostream>
using namespace std;

int main(){
	// rows, columns
	int jorge[2][3] = { {2,3,6},{4,5,7} };

	// 2 3 6
	// 4 5 7

	//cout << jorge[0][2] << endl;

	// printing the array

	for(int row=0; row<2;row++){
		
		for(int col=0;col<3;col++){
			cout << jorge[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
