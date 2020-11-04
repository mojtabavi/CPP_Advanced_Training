//Scoping Example
#include <iostream>
using namespace std;

int x = 1; //global variable

void useLocal();
void useStaticLocal();
void useGlobal();

int main()
{
    cout << "global x in main is " << x << endl;

    int x = 5;

    cout << "local x in main's outer scope is "<< x << endl;

    {// start new scope
        int x = 7;

        cout << "local x in main's inner scope is "<< x << endl;
    }// end new scope 

    cout << "local x in main's outer scope is "<< x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "\nlocal x in main's outer scope is "<< x << endl;
}//end main

void useLocal()
{
    int x = 25;
    cout << "\nlocal x in main is "<< x <<endl;
    ++x;
    cout << "local x is "<< x << " on exiting useLocal" << endl;
}//end function useLocal

void useStaticLocal()
{
    static int x = 50;

    cout << "\nlocal static x is "<< x << " on entering useStaticLocal "<< endl;
    ++x;
    cout << "local static x is "<< x << " on exiting useStaticLocal"<< endl;
}// end function useStaticLocal

void useGlobal()
{
    cout << "\nglobal x is "<< x << " on entering useGlobal "<< endl;
    x *= 10;
    cout << "global x is "<< x << " on exiting useGlobal "<< endl;
}// end function useGlobal