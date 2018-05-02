#include <iostream>
#include <string>

using namespace std;

class jorgeclass{
	public:                          //Everything undeneath is public

	jorgeclass(string z){            // Does not have a data type
	                                 // Used to give variables an initial value
		setName(z);
		}
		void setName(string x){
			name = x;
		}                           // seter function
		string getName(){
			return name;
		}
	private:                       // Everything underneath is private
		string name;
};

int main(){

	jorgeclass bo("Jorge G");

	cout << bo.getName() << endl;


/*
Constructor: get created as soon as you create an object
Whenever you create an object they have their own set of variables, they will 
not be overrriden
*/


return 0;
}
