//Intitializing an array's elements to zeros and printing the array
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int n[10];

    //initialize elements of array n to 0
    for(int i=0;i<10;i++)
    {
        n[i] = 0;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for( int j=0;j<10;++j)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}