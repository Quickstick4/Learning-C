#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main()
{
    std::vector<int> data; //intialize the array - vector is the closest that C++ has to a 'traditional' array according to the book. 
    int x(0);

    //Read intergers one at a time
    while (std::cin >> x)
    {
        data.push_back(x);
    }

    std::sort(data.begin(), data.end());

    for (std::vector<int>::size_type i(0); i != data.size(); i = i+1)
    {
        std::cout << data.at(i) << '\n';
    }
}
