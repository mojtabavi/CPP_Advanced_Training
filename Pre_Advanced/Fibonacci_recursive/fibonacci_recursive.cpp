// Testing the fibonacci recursive function
#include <iostream>
using namespace std;

unsigned long fibonacci ( unsigned long ); // function prototype

int main()
{
    for ( int counter = 0; counter <= 10; ++counter )
        cout << "fibonacci( "<< counter << " ) = "
            << fibonacci( counter ) << endl;
}

// recursive function fibonacci
unsigned long fibonacci( unsigned long number )
{
    if ( ( number == 0 ) || ( number == 1 ) ) //base cases
        return number;
    else // recursive step
        return fibonacci( number - 1 ) + fibonacci( number - 2);
}// end function fibonacci