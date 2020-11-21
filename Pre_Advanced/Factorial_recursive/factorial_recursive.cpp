// Demonstrating the recursive function factorial
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // function prototype

int main()
{
    for ( int counter = 0; counter <= 10; ++counter )
        cout << setw( 2 ) << counter << "! = " << factorial( counter )
            << endl;
}

unsigned long factorial( unsigned long number )
{
    if( number <=1 )
        return 1;
    else // recursive step
        return number * factorial( number - 1 );
    
}