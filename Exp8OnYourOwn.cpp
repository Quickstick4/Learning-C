#include <iostream>
#include <ostream>
#include <istream>
#include <iomanip>

//Program written by me (gregory keenan) to try and achieve the aim of a Multiplication table using C++ formatting tools


int main()
{
    //Decelerations
    int tableSize;

    //Input to determine input length
    std::cout << "Enter Table Size as int :";
    std::cin >> tableSize;
    std::cout << '\n';

    //First 2 lines need to be set, the rest can then be iterated
    //Generates first line
    //First bit is unique
    std::cout << "" << std::setfill(' ') << std::setw(5) << std::right << "*|";

             //iterates to populate the rest of the line at correct spacing.  
             for(int i(0); i < tableSize+1; i++)
             {
               std::cout << std::setw(5) << std::right << i;
             }
    //New line at end of first line             
    std::cout << '\n';

    //Generates Top border ------
    std::cout << std::setfill('-') << std::setw(5) << std::right << "+" << std::setw(5*tableSize+5) << '\n';

    for(int i(0); i < tableSize+1; i++)
    {
            //Print out the numbers down the side and the border of the table working by row
            std::cout << std::setfill(' ') << std::setw(4) << std::right << i << "|";

            //Print out the individual numbers in the table working by column
            for (int NestedI(0); NestedI < tableSize+1; NestedI++)
            {
                std::cout << std::setfill(' ') << std::setw(5) << std::right << i*NestedI;
            }

            std::cout << '\n';
    }
}
