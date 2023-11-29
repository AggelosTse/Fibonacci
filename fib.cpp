#include "fib.hpp"
#include <iostream>
#include <cmath>

using std::cout,std::cin;

fibonacci::fibonacci(int x, int y) {ar1 = x, ar2 = y;}
fibonacci::~fibonacci() {}


void fibonacci::clearscreen()   //clears old dta from the screen.
{
  #ifdef _WIN32     //checks if the program is running from a Windows operating system.
    system("cls");  //if it does, it runs this command, which clears old data from the screen (runs only on windows).
  #else
    system("clear");  //if it is running from unix or macOS, it runs this command that does the same thing.
  #endif
}


void fibonacci::Fib(int ar1,int ar2, int posoiarithmoi, int pl)     //recursive function that loops and prints fibonacci sequence.
    {
        int s = ar1 + ar2;
        if(pl < posoiarithmoi) {cout << s << ",";}
        if(pl == posoiarithmoi) {cout << s << ".\n"; return;}
        pl++;
        ar1 = ar2;
        ar2 = s;
        Fib(ar1, ar2, posoiarithmoi, pl);                           //calls itself so that it loops.
        return;
    }


void fibonacci::userinput()    //Gets user's input and checks if its valid.
    {
        clearscreen();
        cout << "How many Fibonacci numbers do you want to print?\n";
        int input;
        cin >> input;
        while(input <= 0 || cin.fail())
           {
             cin.clear();       
             cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
             cout << "Invalid Input, try again." << "\n";
             cin >> input;
            }    
        clearscreen();
        if(input == 1) {cout << ar1 << ".\n";}                      //if 1 is pressed, it prints the first number of the sequence.
        else if(input == 2) {cout << ar1 << "," << ar2 << ".\n";}   //if 2 is pressed, it prints the first and the second number.
        else 
           {
             cout << ar1 << "," << ar2 << ",";
             Fib(ar1, ar2, input, 3);                               //if its more than 2, it prints the first 2 and it calls the function.
           }
        return;
    }