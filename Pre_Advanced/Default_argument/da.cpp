// Using default arguments
#include <iostream>
using namespace std;

int boxVolume(  int length = 1, int width = 1, int height = 1 );

int main()
{
    // no arguments--use default values for all dimensions
    cout << "The default box volume is: " << boxVolume();

    cout << "\n\nThe volume of the box with length 10: \n" 
        << "width 1 and height 1 is: " << boxVolume(10) << endl;


}

int boxVolume( int length, int width, int height )
{
    return length * width * height;
}