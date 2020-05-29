#include <iostream>
#include <ostream>

//Exercise from the book

int main()
{
    int sum(0);

    //Fill in the loop here
    //Book solution: for(int i(10); i != 21; i = i + 1) rest was the same except for the {} bracket. 
    for(int i(10); i !=21 ; i++)
    {
        sum = sum + i;
    }

    std::cout << "Sum of 10 to 20 = " << sum << '\n';
}

