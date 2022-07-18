#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

void fun(struct Rectangle *r){
    r->length=25;
    cout<<r->length<<" "<<r->breadth<<endl;
}

struct Rectangle *create(){
    struct Rectangle *P;
    P= new Rectangle;
    P->length=54;
    P->breadth=58;
    return P;
}
int main(){
    Rectangle R={10,5};
    cout<<R.breadth<<endl;
    cout<<R.length<<endl;
    fun(&R);

    Rectangle *P=create();
    cout<<P->length<<" "<<P->breadth<<endl;
    return 0;
}