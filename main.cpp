#include <iostream>
#include <cmath>
#include "fib.hpp"
 
using std::cin,std::cout,std::string;

int main()
{
    fibonacci f(0,1);    //creates the object and calls the constructor.
    f.userinput();      
    return 0;
}