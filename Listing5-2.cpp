#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << ", how old you? ";
    int age;
    std::cin >> age;
    std::cout << "Good-bye, " << name << " aged " << age << '\n';

}
