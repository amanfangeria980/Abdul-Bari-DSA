#include<iostream>
using namespace std;

int add(int a,int b){
    int c = a+b;
    return c;
}
int main(){
    int a=5,b=01,sum;
    sum = add(a,b);
    cout<<sum;
    return 0;
}