#include <iomanip>
#include <iostream>
#include <ostream>

int main()
{

    //Used to show that you don't always need to write std::cout
    //Think I prefer it as it makes sense im my mind to put std::cout - you know where cout is from a standard libary
    //instead of one you have written your self.

    //After writting this, the book actually recomends you don't use namespace
    using namespace std;

    int day(14);
    int month(3);
    int year(2006);
    int dollars(42);
    int cents(7);

    //Print Date in USA order. Later in the book...

    cout << "Date: " << setfill('0') << setw(2) << month
                              << '/' << setw(2) << day
                              << '/' << setw(2) << year << '\n';
    
    cout << "Pat to the order of: CASH\n";

    cout << "The amount of $" << setfill('*') << setw(8) << dollars << '.'
                              << setfill('0') << setw(2) << cents << '\n';
}
