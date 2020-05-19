#include <iostream>
#include <ostream>

int main()
{
    int sum(0);
    int count(0);
    int x;
    while (std::cin >> x)
    {
        sum = sum + x;
        count = count +1;

    }
    if(sum > 0)
    {
        std::cout << "Average = " << sum / count << '\n';
    }
    else
    {
        std::cout << "No input, can't divide by Zero!" << '\n';
        
    }
    
}
