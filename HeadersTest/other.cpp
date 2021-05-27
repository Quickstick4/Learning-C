#include <iostream>
#include "other.h"

/////////////////////////Class code for Class and functions declared in Header file//////////////////

//Instaciate the class/Delare the object (make the object)

//This is taken by the linker as a definition/decleration - therefore to declare it the constructor runs. 
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

int holder = job.getNumber(); //this is seen by the linker as a definition/decleration and becomes global - bad practise to leave it outside of a method/class

/////////////////////////Class code for Class and functions declared in Header file//////////////////


void MyFunc() {
    std::cout << "Ohai from another .cpp file!" << '\n';
//    std::cout << "The number is really " << holder;
    
    std::cin.get();
}
