//Written to retest the compiler on my MacBook as XCode has changed a few things

//Taken from the book Exploring C++ The programmers introducion to C++
//States explicitly in the book not to understand it - just to test compilation for the exercises in the book

//Sort the standard input alphabetically.
//Read lines of text, sort them, and print the results to the stadard output.
//If the command lune names a file, read from that file. otherwise, read from the standard input. The tinter input is stored in memory, so don't try the with input files that exceed available RAM

//Program from Learning C++ a programers introduction
//Sort the standard input alpabetically

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <locale>
#include <ostream>
#include <string>
#include <vector>

//only typing this out to test the compiler. Nothing else. No learning to be gained from this. Comments not typed out either.
template<class Ch, class Tr, class OutIter>

void read (std::basic_istream<Ch,Tr>& in, OutIter iter)
{
    std::basic_string<Ch,Tr> line;
    while (std::getline(in, line))
    {
        *iter = line;
        ++iter;
    }
}

//sorter function object
template<typename Ch>
class sorter
{
    public:

    sorter(Ch const* locname) :
        loc_(std::locale(locname)),
        collate_(std::use_facet<std::collate<Ch> >(loc_))
    {}

    sorter() :
        loc_(std::locale()),
        collate_(std::use_facet<std::collate<Ch> >(loc_))
    {}

    template<typename Tr>
    bool operator()(const std::basic_string<Ch,Tr>& lhs,
                    const std::basic_string<Ch,Tr>& rhs)
                    {
                        return collate_.compare(lhs.data(), lhs.data()+lhs.size(), 
                        rhs.data(), rhs.data()+rhs.size()) < 0;
                    }

private:
    std::locale loc_;
    const std::collate<Ch>& collate_;


};

template<typename Ch>
sorter<Ch> make_sorter(Ch const * name)
{
    return sorter<Ch>(name);
}

//Main Program
int main(int argc, char* argv[])
try
{
    std::cin.exceptions(std::ios_base::badbit);

    std::vector<std::string> text;

    if (argc < 2)
        read(std::cin, std::back_inserter(text));
    
    else
    {
        std::ifstream in(argv[1]);
        if (not in)
        {
            std::perror(argv[1]);
        }
        read(in, std::back_inserter(text));

    }

    std::sort(text.begin(), text.end(), make_sorter(argc >= 3 ? argv[2] : ""));

    std::copy(text.begin(), text.end(),
                    std::ostream_iterator<std::string>(std::cout, "\n"));
    

}
catch(std::exception& ex)
{
    std::cerr << "Caught exception" << ex.what() << '\n';
    std::cerr << "Terminating program.\n";
    std::exit(EXIT_FAILURE);
}
catch (...)
{
    std::cerr << "Caught unknown exception type.\nTerminating program.\n";
    std::exit(EXIT_FAILURE);
}
