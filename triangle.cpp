#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
 * triangle.cpp
 *
 *  Created on: May 29, 2018
 *      Author: JorgeGalvezv
 */



int gentrian(int nat){

	vector<int> ndiv;
		for(int i=1; i<=sqrt(nat);i++){

			if(nat%i==0){
					if(nat/i == i){
				ndiv.push_back(i);
					}else{
						ndiv.push_back(i);
						ndiv.push_back(nat);
					}
			}

		}
		int size = ndiv.size();
		if(size!=500){
		ndiv.clear();
		}
		return size;
}


int main(){
	int nat = 0;
	int i = 1;

	while(gentrian(nat)<500){
		nat += i;
		i++;
	}
	cout << nat << endl;
	return 0;
}



