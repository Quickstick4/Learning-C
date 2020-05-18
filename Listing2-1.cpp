//From the same book
//Comments by GK as learning to clarify what every statement does.


////////////Headers////////////

//Headers are typically files that countain a series of declarations and definitions
//Any line begining with a #, ends at end of line.


//These headers are part of the standard C++ library and located with the compiler on the system, and are refered to in the vis the 'std' namespace
//N.B. later in the book, own headers will be used. 


//Brings the standard input and outputs to the program (cin is standard input, cout is standard output)
#include <iostream>

//Brings the input operator '>>'
#include <istream>

//Brings the output operator '<<'
#include <ostream>

//Brings the numeric_limits
#include <limits>

////////////End-Headers////////////

////////////Main Program///////////
//Every C++ must have int main() - void is permitted instead of int, no arguments passed at this point
int main()
{
    //Defining variables, the std::numeric_limits<int> provides the maximum/minimum (depending what you ask for) value a type of <variable-type> can hold. 
    //Therefore the int min is being declared and set with the max number a int can hold. This allows for the simple while statement to work because the first input
    //will always be smaller than min and greater than max at the same time.

    //int min(std::numeric_limits<int>::max());
    
    //int min;
    int min = std::numeric_limits<int>::max(); //experimenting with different ways of declaring this

    std::cout << "min = " << min << '\n'; //printing output to test new decleration method.


    int max(std::numeric_limits<int>::min());
    //std::cout << "max = " << max << '\n';
    
    
    //further declreations
    bool any(false); //boolean 
    int x;
    //

    //Reads intergers from the standard input (std::cin) stores the variable to x. The condition is true as long as the a value is stored in x.
    while (std::cin >> x) //if input is malformed or program reaches end of input stream (CTRL+D), condition fails and loop terminates
    {
        any = true; //Input has now been recived from std:cin
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    if (any) //as input has been recived, output the min and max numbers. If no input recived and the while loop terminates, this if statement is not triggered and the programe ends with no output.
        std::cout << "min = " << min << "\nmax = " << max << '\n';
}
