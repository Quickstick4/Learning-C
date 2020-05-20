//By GK
//Day 4 of C++ learning

#include <iostream>
#include <ostream>
#include <string>

int main ()
{
    std::string shape;
    int sides;

    //commented out for Listing 4-6 exercise. N.B. the exercise is to point out that un-initiated variables are not good in C++
    //This is because C++ places a value in the declaration 'undefined behaviour'. Ints are unpredictable when not intilasied after
    //deceleration 
    
    //sides = 3;
    //shape = "Triangle";

    // \n is new line. \t is tab.
    std::cout << "Shape\tSides\n" << "-----\t-----\n";
    std::cout << "Square\t" << 4 << '\n' << "Circle\t?\n";
    // \" enables double quote to be outputted
    std::cout << "\"This is the way\"" << '\n';

    //std::cout << "Triangle\t" << 3 << '\n';
    std::cout << shape << '\t' << sides << '\n';

}
