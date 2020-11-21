// Function Template maximum test program
#include <iostream>
#include "maximum.h"
using namespace std;

int main()
{
    int int1,int2,int3;

    cout << "Input three integer values: ";
    cin >> int1 >> int2 >> int3;

    cout << "The maximum integer value is: "
        << maximum(int1,int2,int3);

    
    double double1,double2,double3;

    cout << "\n\nInput three double values: ";
    cin >> double1 >> double2 >> double3;

    cout << "The maximum double value is: "
        << maximum(double1,double2,double3);
}