#include <algorithm>
#include <iostream>
#include <istream>
#include <ostream>
#include <vector>

int main()
{
    std::vector<int> data; //intialize the array - vector is the closest that C++ has to a 'traditional' array according to the book. 

    //data.front() returns element from begining
    //data.back() returns element from end of array
    //data.get(x) returns element from poisition x
    //Book recommends using these functions to return values instead of (data [n]) because it is safer during execution whilst learning/experimenting

    //std::vector<std::string>; remember C doesn't really have a string, its a defined data type inside included <vector> file.
    std::vector<char> Singing;
    int x(0);

    //Read intergers one at a time
    while (std::cin >> x)
    {
        data.push_back(x);
    }

    //This sort function is a part of C++ and can sort anything that you provide it based on what you want
    //the begining position to be and the end position. It doesn't have to be the start and end of the 
    //vector.

    //The being and end are both refereed to in C++ as iterators - they iterate through vectors, files, tree nodes etc
    //'An iterator is an object that can refer to an element of a sequence'

    //begin() returns an iterator that refers to the first element
    //end() returns an iterator with the spacial one-past-the-end value
    //if the vector is empty, begin() will return the same value as end() (can use == operator on iterators)
    //Better way is with empty() (rtns boolean) 
    std::sort(data.begin(), data.end());

    for (std::vector<int>::size_type i(0); i != data.size(); i = i+1)
    {
        std::cout << data.at(i) << '\n';
    }
}

int testing()
{
    //does this work?
    return 0;

    //answear - it does. Functions learnt! Lets Change this again
}
