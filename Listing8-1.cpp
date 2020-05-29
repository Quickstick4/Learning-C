
//This is a new include from the Standard Library. 
//TODO: List what this does
//This header declares tools such as set width.
#include <iomanip>

#include <iostream>
#include <ostream>

int main()
{
    std::cout << "N    N^2  N^3\n";
    for (int i = 1; i != 21; ++i)
    {
        //Fill in the loop body here
        if(i < 4)
        {
             std::cout << i << "    " << i*i << "    " << i*i*i << '\n';
        } else if (i >= 4 && i < 10) {
            std::cout << i << "    " << i*i << "   " << i*i*i << '\n';
        } else if (i >= 10) {
            std::cout << i << "   " << i*i << "  " << i*i*i << '\n';
        }


       
    }
}
