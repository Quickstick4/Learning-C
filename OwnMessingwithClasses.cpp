//This me (Greg Keenan) just messing with classes in C++ working this out. 
#include <string>
#include <iostream>
#include <istream>
#include <ostream>

class MyClass {
	public:
		int testing;
		std::string aStringingthing; //hmmm, needs standard name space. 
									 //This is because string is a C++ object from char. 

};

int main()
{
	MyClass numberandworldholder; //Creates the object from the class. No need to instanciate it like Java

	numberandworldholder.testing = 5552;
	numberandworldholder.aStringingthing = "Number for Sick bay";


	std::cout << "Number: " << numberandworldholder.testing << '\n';
	std::cout << "Text: " << numberandworldholder.aStringingthing << '\n';

	return 0;

	//Lets see if this works. 

}