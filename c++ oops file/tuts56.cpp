#include<iostream>
using namespace std;

template<class T1 , class T2>
float averagefun(T1 a ,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    
   
    cout<<"the value of average function is "<<averagefun(23,3434.434)<<endl;
    return 0;
}