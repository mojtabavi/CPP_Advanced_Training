// Using the unary scope resolution operator
#include <iostream>
using namespace std;

int number = 7; // global variable named number

int main()
{
    double number = 10.5;

    // display value of local and global variables
    cout << "Local double value of number = " << number
        << "\nGlobal int value of number = " << ::number << endl;
}// end main