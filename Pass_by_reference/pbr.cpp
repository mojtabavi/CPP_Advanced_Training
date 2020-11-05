// Comparing pass-by-value and pass-by-reference with references.
#include <iostream>
using namespace std;

int squareByValue( int );
void squareByReference( int & );

int main()
{
    int x = 2; // value to square using squareByValue 
    int z = 4; // value to square using squareByReference


    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: "
        << squareByValue( x ) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;


    cout << "z = " << z << " before squareByReference\n";
    squareByReference(z);
    cout << "z = " << z << " after squareByReference\n" << endl;
}// end main

int squareByValue( int number )
{
    return number *= number;
}

void squareByReference( int &numberRef )
{
    numberRef *= numberRef;
}