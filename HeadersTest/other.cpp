#include <iostream>
#include "other.h"



//ClassConstructor - Construct the object when called
myClass::myClass(int thisOne)
 {
    HasNumber = thisOne;
 }

//Instaciate it/Delare the object (make the object)
 myClass job(45);



//Write the function
 int myClass::getNumber()
 {
    return HasNumber;

 }

 int holder = job.getNumber();


void MyFunc() {
    std::cout << "Ohai from another .cpp file!" << '\n';
    std::cout << "The number is really " << holder;
    





    

 //   std::cout << "Number is:" << numberwang::test; 




    std::cin.get();
}
