#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main(){
    int a=10;
    int *p; //declaration of a pointer
    p=&a; //assigning the address of a to the pointer p using addressof (ampersand) operator
    // cout<<a<<endl;
    // cout<<*p<<endl; //printing value stored in p using deferencing operator

    // cout<<p<<endl; //here it is printing address of a which we have stored in pointer p above

    //Now, Pointer to an Array
    int A[5]={3,5,7,9,4};
    int *q; // initialised a new pointer;
    q=A; 
    // cout<<*(A+1)<<endl;
    //here we have not used an ampersand sign because A itself stores starting address of the array(i.e, address of 3).
    
    // cout<<*q<<endl; //3

    //or we can also write:
    // q=&A[1];  
    // it will store the address of element stored in the 1st index of the array i.e., the address of 5.
    // cout<<*q<<endl;   //5
    //for moving forward in array we can increment it as per our need like this
    // q++;
    // cout<<*q<<endl; //7
    //printing all the element in the array
    // for(int i=0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }
    //now, we can print all the element using pointers like this:
    // for(int i=0;i<5;i++){
    //     cout<<*q<<endl;
    //     q++;
    // }
    //after complete loop q may have garbage address.
    //above array we used was created and stored in stack memory.

    //now, we will create a new array using dynamic allocation which will be allocated in heap
    int *r;
    // Syntax is:s
    // <dataType> * <pointer name> = new <dataType> [<size>];
    r=new int[5]; //
    //here an array of int type is dynamically allocated in heap memory and r stores the starting address of array(i.e., the address of the first element).
    //assigning values to the above array
    r[0]=50;
    r[1]=51;
    r[2]=53;
    r[3]=52;
    r[4]=55;

    // for(int i=0;i<5;i++){
    //     cout<<r[i]<<endl;
    // }

    //now, as we have used new keyword and requested to get our array dynamically allocated in heap, so we have to release the memory after we have finished using it, we also have to delete it to prevent memory leak.
    delete [ ] r;


    //new concept
    //firstly define a strucure outside our main function(refer to it line no. 4)

    //initialising some pointers of different data types
    int *g1;
    char *g2;
    float *g3;
    double *g4;
    struct Rectangle *g5;

    //printing size of all the pointers

    cout<<sizeof(g1)<<endl;
    cout<<sizeof(g2)<<endl;
    cout<<sizeof(g3)<<endl;
    cout<<sizeof(g4)<<endl;
    cout<<sizeof(g5)<<endl;

    //all pointers takes same bytes (in our case 4 bytes) even if they are of different data types
    //i.e., size of pointer is independent of its data type
    
    return 0;
}