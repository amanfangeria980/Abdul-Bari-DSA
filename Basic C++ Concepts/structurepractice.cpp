#include <iostream>
using namespace std;

// Defining a Structure
struct Rectangle
{
    int length;
    int breadth;
};
// We can also declare a structure here!Syntax for that is:
//  struct Rectangle{
//      int length;
//      int breadth;
//  } r1,r2;
// Here, r1 and r2 is declared simultaneously with the definition.

// or
// struct Rectangle r1,r2;

int main()
{
    // Declaring a Structure

    // Only Declaration Here!
    struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    // Or, We can also do Declaration+Initialisation
    //  struct Rectangle r1 ={10,20};
    // Above length will be initialised with 10 and breadth will be initialised with 20

    // Now, Size of the structure
    cout << sizeof(r1) << endl;

    // now we will have to add one more data member to our structure suppose we will create a new structure here and name it as rect:
    struct rect
    {
        int l;
        int b;
        char x;
    };
    struct rect rect1;
    cout << sizeof(rect1) << endl;
    // now what happens here is when we added a new member a character and then print the sizeof structure then it should be 4+4+1=9 but, it will print 12,the reason here is it's easy for our machine to read four-four bytes at a time. so for char it is (*imp - it will take a nearest bigger size) also allocating 4 bytes but it will be using only byte out of it.

    // or
    // In order to align the data in memory, one or more empty bytes (addresses) are inserted (or left empty) between memory addresses which are allocated for other structure members while memory allocation. This concept is called structure padding.

    // for accessing the member of the structure
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    // we can also change the values using this:
    r1.length = 15;
    r1.breadth = 25;
    // to see the changes
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0;
}