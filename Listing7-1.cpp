#include <iostream>
#include <ostream>

int main()
{
    //Like Java - Initialization; condition; post-iteration. Additionally I does not exist outside ot the loop.
    for (int i(0); i != 10; i = i+1)
        std::cout << i << '\n';
}
