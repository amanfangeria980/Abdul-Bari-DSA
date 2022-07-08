#include<iostream>
using namespace std;

//Here instead of arr[], we can use an integer pointer, it's also fine, like this
//void fun(int *arr,int n){
void fun(int arr[],int n){
    int arrSize=sizeof(arr);
    cout<<arrSize<<endl; // 4
    int intSize=sizeof(int);
    cout<<intSize<<endl; // 4
    int size=sizeof(arr)/sizeof(int); //gives 1 as arrSize doesn't give size of array rather it gives size of 'int*'.
    cout<<size<<endl;

    //Also, we cannot use forEach loop on a pointer it will give error, below we used it because it was an array.
    //Buy, we can use for loop.

    //also, if we change any elements inside a function here, it will be reflected to the actual array because we are using a pointer.


    cout<<"Printing element in function using for loop"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Now, how to return an array
int * returnArr(int Size){
    int *p;
    p=new int[Size];
    for(int i=0;i<Size;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){
    int A[]={1,2,3,4,5};
    cout<<"Printing element in main using forEach Loop"<<endl;
    for(int x : A){
        cout<<x<<" ";
    }
    int size=sizeof(A)/sizeof(int); //gives 5
    cout<<"\nSize "<<size<<endl;
    //now the same above statement when written in function gives 1 (i.e. 4/4 or size of pointer/size of int or one element of array) because 'sizeof' on array function parameter 'arr' will return size of 'int*'. That's why we generally also pass the size of the as a parameter while using array as a parameter.

    fun(A,size);

    // arrays are always passed by address

    //returning an array
    returnArr(size);

    int *ar;
    ar=returnArr(size);
    for(int x=0;x<size;x++){
        cout<<ar[x]<<" ";
    }
    cout<<endl;
    return 0;
}