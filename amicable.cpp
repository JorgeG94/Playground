#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
using namespace std;


int getdivofsum(int nat){
	vector<int> sum;
	int sumofelementsofsum = 0;
	for(int i=1; i<=sqrt(nat);i++){
		if(nat%i == 0){
			if(nat/i == i){
				sum.push_back(i);
			}else{
				sum.push_back(i);
				sum.push_back(nat/i);
			}
		}
	}
	sumofelementsofsum=accumulate(sum.begin(), sum.end(),0) - nat;
	if(sumofelementsofsum==nat){
		return 0;
	}
	//cout << " getdivofsum " << sumofelementsofsum << endl;
	return sumofelementsofsum;
}



vector<int> getdiv(int nat){
	vector<int> sum;
	int sumofelements = 0;
	vector<int> amic;
	for(int i=1; i<=sqrt(nat);i++){
		if(nat%i == 0){
			if(nat/i == i){
				sum.push_back(i);
			}else{
				sum.push_back(i);
				sum.push_back(nat/i);
			}
		}
	}
	sumofelements=accumulate(sum.begin(), sum.end(),0) - nat;
	int tmp = getdivofsum(sumofelements);

	if(nat==tmp){
		amic.push_back(nat);
		amic.push_back(sumofelements);
	}
	return amic;
}


int main(){
	int nat = 0;
	vector<int> res;

	for(int i=1; i<=10000; i++){
		nat = i;
		res = getdiv(nat);
		for(int j=0; j<res.size();j++){
			cout << res[j] << endl;
		}
	}
	
	/*
	sort( res.begin(), res.end() );
	res.erase( unique( res.begin(), res.end() ), res.end() );
	for(int j=0; j<res.size();j++){
		cout << res[j] << endl;
	}*/
	return 0;
}
