#include <iostream>
#include <cmath>

using std::cin,std::cout,std::string;

class fibonacci
{
    public:
        fibonacci(int x, int y) {ar1 = x, ar2 = y;}
        ~fibonacci() {}
        void Fib(int ar1,int ar2, int posoiarithmoi, int pl)
        {
            int s = ar1 + ar2;
            if(pl < posoiarithmoi) {cout << s << ",";}
            if(pl == posoiarithmoi) {cout << s << "."; return;}
            pl++;
            ar1 = ar2;
            ar2 = s;
            Fib(ar1, ar2, posoiarithmoi, pl);
            return;
        }
        void userinput()    //Gets user's input and checks if its valid .
            {
            cout << "How many Fibonacci numbers do you want to print?\n";
            int input;
            cin >> input;
            while(input < 0 || cin.fail())
                {
                cin.clear();       
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid Input, try again." << "\n";
                cin >> input;
                }    
                if(input == 1) {cout << ar1 << ".\n";}
                else if(input == 2) {cout << ar1 << "," << ar2 << ".\n";}
                else 
                {
                    cout << ar1 << "," << ar2 << ",";
                    Fib(ar1, ar2, input, 3);
                }
                return;
            }


    private:
     int ar1,ar2;
};

int main()
{
    string ans;
    cout << "DO YOU WANNA FIBONACCI!?\n";
    cin >> ans;
    while(ans != "yes" && ans != "no")
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Input, try again\n";
        cin >> ans;
    }
    if (ans == "yes")
    {
        fibonacci f(0,1);   
        f.userinput();
        return 0;
    }
    if (ans == "no") {return 0;}
}