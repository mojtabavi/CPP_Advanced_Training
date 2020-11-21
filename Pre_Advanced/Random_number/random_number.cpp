#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    int v1 = rand() % 100;         // v1 in the range 0 to 99
    int v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
    int v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3: " << v3 << endl;
    
    

	

} // end main