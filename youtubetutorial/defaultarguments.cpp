#include <iostream>
using namespace std;
/*
int volume(int l, int w, int h){
// int volume(int l=1, int w=1, int h=1) default values if function
// is called without parameters volume()
return l*w*h;
}
*/

int volume(int l=1, int w=1, int h=1);

int main(){

	cout << volume(4,5,5) << endl;

	return 0;
}


int volume(int l, int w, int h){
	return l*w*h;
}
