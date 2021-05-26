#include "other.h"
#include <iostream>

void MyFunc();



int main()
{

	//Instaniating an object
	myClass joby(5);

	//Using its methods written in other.cpp!
	int holder = joby.getNumber();

	//these are linked in the other.h - i.e. when the linker looks for these functions/class - it goes to the header file. 


	std::cout << "The number is " << holder << '\n';
	MyFunc();



}