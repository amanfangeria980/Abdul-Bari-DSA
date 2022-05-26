#include<iostream>
using namespace std;

int main(){
    // int A[]={1,2,3,4,5};
    // cout<<sizeof(A[0])<<endl;
    // cout<<A[1]<<endl;
    // cout<<A[2]<<endl;
    // cout<<A[3]<<endl;
    // cout<<sizeof(A[4])<<endl;

    // cout<<sizeof(A)<<endl;
    // cout<<sizeof(int)<<endl;
    // int len = sizeof(A)/sizeof(int);
    // or
    // int len = sizeof(A)/sizeof(A[0]);
    // cout<<len;


    // int arr1[5]={1,2,3};
    // cout<<arr1[0]<<endl;
    // cout<<arr1[1]<<endl;
    // cout<<arr1[2]<<endl;
    // cout<<arr1[3]<<endl;
    // cout<<arr1[4]<<endl;
    // it means rest of the values are zero.

    // int arr[]={};
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];
    // cout<<arr[4];
    //all elements have garbage values

    // int arr2[5]={};
    // cout<<arr2[0];
    // cout<<arr2[1];
    // cout<<arr2[2];
    // cout<<arr2[3];
    // cout<<arr2[4];
    //all elements have zero value


    // int arr[]={1,3};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[4]<<endl;
    // cout<<arr[5]<<endl;
    // cout<<arr[6]<<endl;
    //left up values have garbage values following from index 2
    // cout<<sizeof(arr);

    //garbage values for rest of them which are not declared

    //For Loop
    // int A[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }

    // for each loop:
    // for(int i:A){
    //     cout<<i;
    // }

    // int n;
    // cout<<"Enter the size for your array"<<endl;
    // cin>>n;
    // int arr[n];

    //In the above line we cannot initialise the array in some compilers along with declaration as it a variable sized object.
    // but if it runs, the syntax would be like this:
    // int arr[n]={1,2,3,4,5};
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr[0])<<endl; 
    // cout<<sizeof(arr[1])<<endl;

    //all the values will be garbage values for now and can be assigned now like this:
 
    // arr[0]=0;
    // arr[1]=1;
    //iterating over the array using forEach Loop
    // for(int i:arr){
    //     cout<<i<<endl;
    // }
    // return 0;
}