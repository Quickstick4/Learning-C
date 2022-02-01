#include <iomanip> //this is the header allowing manipulation of the output stream

#include <iostream>
#include <ostream>
#include <string>


void getFlags()
{


    std::ios_base::fmtflags flags = std::cout.flags();
    std::string sflags;

    //If the flags and the definition of the flag matches - add the flag into the string sflags

    if( flags & std::ios_base::skipws ) sflags += "skipws";
    if( flags & std::ios_base::unitbuf ) sflags += sflags.empty() ? "unitbuf" : " unitbuf";
    if( flags & std::ios_base::uppercase ) sflags += sflags.empty() ? "uppercase" : " uppercase";
    if( flags & std::ios_base::showbase ) sflags += sflags.empty() ? "showbase" : " showbase";
    if( flags & std::ios_base::showpoint ) sflags += sflags.empty() ? "showpoint" : " showpoint";
    if( flags & std::ios_base::showpos ) sflags += sflags.empty() ? "showpos" : " showpos";
    if( flags & std::ios_base::left ) sflags += sflags.empty() ? "left" : " left";
    if( flags & std::ios_base::right ) sflags += sflags.empty() ? "right" : " right";
    if( flags & std::ios_base::internal ) sflags += sflags.empty() ? "internal" : " internal";
    if( flags & std::ios_base::dec ) sflags += sflags.empty() ? "dec" : " dec";
    if( flags & std::ios_base::oct ) sflags += sflags.empty() ? "oct" : " oct";
    if( flags & std::ios_base::hex ) sflags += sflags.empty() ? "hex" : " hex";
    if( flags & std::ios_base::scientific ) sflags += sflags.empty() ? "scientific" : " scientific";
    if( flags & std::ios_base::fixed ) sflags += sflags.empty() ? "fixed" : " fixed";
    //if( flags & std::ios_base::hexfloat ) sflags += sflags.empty() ? "hexfloat" : " hexfloat";
    if( flags & std::ios_base::boolalpha ) sflags += sflags.empty() ? "boolalpha" : " boolalpha";
    //if( flags & std::ios_base::_Stdio ) sflags += sflags.empty() ? "_Stdio" : " _Stdio";

    std::cout << "Standard flags from cout stream: " << sflags << std::endl;
}





int main()
{

	//Objectvie of output: 000042

	int output(42);

	//default alignment if to the right - so not putting it in the code
	std::cout << std::setfill('0') << std::setw(6) << output << '\n';

	//Objective of output: 42000
	//setting alignement to be to the left, with the fill numbers of a width of 6 being 0
	std::cout << std::left << std::setfill('0') << std::setw(6) << output << '\n';
	getFlags();

	//This can also be achived with functions of cout
	//The advantage of this method is that it can be quried

	//returns the current io stream flags for the session
	//N.B. this isn't the correct way to do it. I think that the cout.flags() returns the current flags
	//But these aren't standard and if you want to find out what the flags are, you need to create an object

	std::cout <<std::hex << std::cout.flags() << '\n';



	std::cout.fill('0');
	std::cout.width(8); //just to be different
	std::cout.setf(std::ios_base::right, std::ios_base::adjustfield);
	std::cout << std::dec;
	std::cout << output << '\n';

	getFlags();

	std::cout <<std::hex << std::cout.flags() << '\n';

	getFlags();




}