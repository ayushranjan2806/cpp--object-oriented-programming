#include<iostream>
using namespace std;
int main(){
    // program for pointers and the use of a “new” keyword 
    float *p=new float(45.56);
    cout<<"the value of p is "<<*p<<endl;
    int *arr=new int[3];
    arr[0]=45;
    arr[1]=33;
    arr[2]=87;
    cout<<"value of array 1 is "<<arr[0]<<endl;
    cout<<"value of array 2 is "<<arr[1]<<endl;
    cout<<"value of array 3 is "<<arr[2]<<endl;
    
    return 0;
}