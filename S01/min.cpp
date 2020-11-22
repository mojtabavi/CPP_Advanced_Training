#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter 3 Number to guess the min: ";
    cin >> a >> b >> c;
    int min;
    min = (a<b) ? a : b;
    min = (c<min) ? c : min;
    cout << "the min is: " << min << endl;
    

}

