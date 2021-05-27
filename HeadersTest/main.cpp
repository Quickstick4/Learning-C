#include "other.h"
#include <iostream>

//Can declare functions here vs header file. TODO find out whats best practice. 
void MyFunc();

// By GK - Heavy comments for learning/referencing in future

int main()
{

	//Instantiating a class to create an object. The linker finds the class deceleration in the header file
	myClass joby(5);

	//Using methods written in another file for the object. The linker finds the methods in the header file and then grabs them from the other .cpp file. 
	int holder = joby.getNumber();

	//these are linked in the other.h - i.e. when the linker looks for these functions/class - it goes to the header file. 


	std::cout << "The number is " << holder << '\n';

	//Calling a function already declared in the file and the linker finds in the other .cpp file without having to use a header. 
	MyFunc();



}