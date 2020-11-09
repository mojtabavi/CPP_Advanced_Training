//Compute the sum of the elements of the array
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int arraySize = 11;
    int a[arraySize] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };
    int total = 0;

    cout << "Grade distribution:" << endl;

    // for each elements of array n, output a bar of the chart
    for( int i = 0; i < arraySize; ++i )
    {
        // output bar labels ("0-9:", ..., "90-99:". "100:")
        if ( i == 0 )
            cout << "  0-9:  ";
        else if ( i == 10 )
            cout << "  100:  ";
        else
            cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";

        // print bar of asterisks
        for ( int stars = 0; stars < a[i]; stars++)
        {
            cout << '*';
        }
        cout << endl;
        
    }
}// end main