#include<iostream>
using namespace std;
 
//Pass or call by value
/*
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
*/
 
//Pass or call by address or pointer
/*
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
*/
 
//Pass or call by reference
/*
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
*/
int main(){
    int a=5,b=10;
    cout<<"Before Swapping: "<<endl;
    cout<<"a : "<<a<<endl;    
    cout<<"b : "<<b<<endl;

    // swap(a,b); //no actual swap is done.
    // swap(&a,&b); //actual swap is done.
    // swap(a,b); //actual swap is done.

    cout<<"Before Swapping: "<<endl;
    cout<<"a : "<<a<<endl;    
    cout<<"b : "<<b<<endl;    
    return 0;
}