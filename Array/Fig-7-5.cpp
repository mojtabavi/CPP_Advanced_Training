//Set array s to the even integers from 2 to 20
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int arraySize = 10;
    int s[arraySize];

    //initialize elements of array n to 0
    for(int i=0;i<10;i++)
    {
        s[i] = 2+2*i;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for( int j=0;j<10;++j)
    {
        cout << setw(7) << j << setw(13) << s[j] << endl;
    }
}