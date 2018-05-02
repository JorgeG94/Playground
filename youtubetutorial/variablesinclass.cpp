#include <iostream>
#include <string>

using namespace std;

class jorgeclass{
	public: //Everything undeneath is public

	jorgeclass(string z){ // Does not have a data type
		// Used to give variables an initial value
		setName(z);
		}
		void setName(string x){
			name = x;
		} // seter function
		string getName(){
			return name;
		}
	private: // Everything underneath is private
		string name;
};

int main(){

	jorgeclass object;
	object.setName("Holi");
	cout << object.getName() << endl;
/* Making variables public makes your program easy to mess up. It's a bad programming
practice to use public variables.
Constructor: get created as soon as you create an object
*/


return 0;
}
