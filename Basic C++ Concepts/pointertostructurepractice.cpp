#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    //Declaring a pointer to structure
    Rectangle *p = &r;
    //Accesing Rectangle strucure data members using pointers
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    //Creating a structure in heap memory using pointer
    Rectangle *q;
    //In C, syntax is:
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    //In C++,
    p=new Rectangle;
    p->length=15;
    p->breadth=7;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}