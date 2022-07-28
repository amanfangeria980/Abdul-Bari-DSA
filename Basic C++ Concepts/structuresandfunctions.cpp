#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialise(Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int calcArea(Rectangle R){
    return (R.length*R.breadth);
}

void changeLength(Rectangle *r,int l){
    r->length=l;
}

void changeBreadth(Rectangle *r,int b){
    r->breadth=b;
}

void show(Rectangle R){
    cout<<R.length<<" "<<R.breadth<<endl;
}
int main(){
    struct Rectangle R;
    initialise(&R,5,10);
    show(R);
    int Area=calcArea(R);
    cout<<"Area : "<<Area<<endl;
    cout<<"After Changing Length and Breadth"<<endl;
    changeLength(&R,50);
    changeBreadth(&R,52);
    show(R);
    return 0;
}