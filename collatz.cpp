#include <iostream>
#include <vector> 

using namespace std; 

int main(){
	int x = 50;
	int size;
	int maxsize = 0;
	vector<int> coll;
	while(x>=1){
		//cout << x << endl;
		coll.push_back(x);
		int tmp = x;
		while(tmp!=1){
			if(tmp%2 == 0){
				tmp = tmp/2;
				coll.push_back(tmp);
			}else{
				tmp = 3*tmp + 1;
				coll.push_back(x);
			}
		//	cout << tmp << endl;
		}
		//cout << coll.size() << endl;
		size = coll.size();
		if(maxsize <= size){
			maxsize = size;
		}
		coll.clear();
		x--;
	}

	cout << maxsize << endl;
	return 0;
}

