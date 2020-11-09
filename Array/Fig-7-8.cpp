//Compute the sum of the elements of the array
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int arraySize = 10;
    int a[arraySize] = {87,68,94,100,83,78,85,91,76,87};
    int total = 0;

    for(int i=0;i<10;i++)
    {
        total += a[i];
    }

    cout << "Total of array elements: " << total << endl;
}// end main