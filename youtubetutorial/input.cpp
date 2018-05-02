#include <iostream>
#include <string>

int main()
{

	std::cout << "Please enter your first name:" ; 

	std::string name; // variable name and type (string)
	std::cin >> name; // allocation of the variable

	std::cout << "Hello," << name << "!" << std::endl;
	return 0;

}


/* 
The input-output library saves its output in an internal data structure
called a buffer, which it uses to optimize output operations
*/
