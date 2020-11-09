//Intitializing an array's elements to zeros and printing the array
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int n[10] = {32,27,64,18,95,14,90,70,60,17};

    cout << "Element" << setw(13) << "Value" << endl;

    for( int j=0;j<10;++j)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}