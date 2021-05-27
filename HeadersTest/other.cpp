#include <iostream>
#include "other.h"

/////////////////////////Class code for Class and functions declared in Header file//////////////////

//Instaciate the class/Delare the object (make the object)
myClass job(45);


//ClassConstructor - Construct the object when called
myClass::myClass(int thisOne)
 {
    HasNumber = thisOne;
    std::cout << "Object Made: " << thisOne << '\n';
 }


//Code for the accssor function
 int myClass::getNumber()
 {
    return HasNumber;

 }

int holder = job.getNumber();

/////////////////////////Class code for Class and functions declared in Header file//////////////////


void MyFunc() {
    std::cout << "Ohai from another .cpp file!" << '\n';
//    std::cout << "The number is really " << holder;
    
    std::cin.get();
}
