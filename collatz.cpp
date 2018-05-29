#include <iostream>
#include <vector> 

using namespace std; 

int main(){
	int x = 1000000;
	int size;
	int maxsize = 0;
	vector<int> coll;
	while(x>=1){
		coll.push_back(x);
		long int tmp = x;
		while(tmp!=1){
			if(tmp%2 == 0){
				tmp = tmp/2;
				coll.push_back(tmp);
			}else{

				tmp = 3*tmp + 1;
				coll.push_back(tmp);
			}
		}
		size = coll.size();
		if(maxsize <= size){
			maxsize = size;
			cout << x << " ---- " << maxsize << endl;
		}
		coll.clear();
		x--;
	}

	return 0;
}
