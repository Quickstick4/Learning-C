//Coding lesson of the day - Exploration 3 from Exploring C++ the Programers introducion to C++
//19 May 2020
//Gregory Keenan

#include <iostream>
#include <istream>
#include <ostream>

int main()
{
    int x;
    while(std::cin >> x)
    {
        //The precentage sign here is for the REMAINDER you numpty, not the division sign
        if(x % 2 != 0)
        {
            std::cout << x << " is odd.\n";
            //int y = x % 2;                //These lines were trying to figure what was going on with the 'Division' sign...not sure why my brain got confused. 
            //std::cout << y << '\n';
        }else{
            std::cout << x << " is even.\n";
        }
    }
}
