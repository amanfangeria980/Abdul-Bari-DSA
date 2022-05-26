#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;        // while declaring a reference variable, we must initialise it simultaneously.
    cout << a << endl; // 10
    cout << r << endl; // 10;
    // now if we change the value of a or r and again print a and r then, the value of reference variable r as well as the original variable a also changes.
    a = 15;
    cout << r << endl; // 15

    r = 35;
    cout << a << endl; // 35
    // if we write this:
    int b = 25;
    r = b; // now here r will not become a reference varible to b or of . it will take the value of b 25.

    // but since r is a reference to variable a so a also now stores 25
    // we cannot change the reference.
    //  cout<<r<<endl; //25
    cout << a << endl; // 25
    return 0;
}