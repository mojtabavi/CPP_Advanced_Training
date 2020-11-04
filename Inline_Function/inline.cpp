#include <iostream>
using namespace std;

inline double cube( const double side )
{
    return side * side * side; // calculate cube
}// end function cube

int main()
{
    double sideValue;
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;

    // calculate cube of sideValue and display result 
    cout << "Volume of cube with side "
        << sideValue << " is " << cube(sideValue) << endl;
}// end main