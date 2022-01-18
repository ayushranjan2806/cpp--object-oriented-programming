#include<iostream>
using namespace std;
// we learnt about templates with multiple parameters,
//  when it comes to handling different data types of two or more containers. 
template<class T1=int,class T2=const char*, class T3=char>
class ayush{
    public:
    T1 A1;
    T2 A2;
    T3 A3;
    ayush(T1 x, T2 y,T3 z){
        A1=x;
        A2=y;
        A3=z;

    }
    void display(){
        cout<<"The value of A1 is"<<A1<<endl;
        cout<<"the value of A2 is"<<A2<<endl;
        cout<<"the value of A3 is"<<A3<<endl;
    }
};
int main(){
    ayush<> a(232,"ajfjjfsdidfi",'a');
    a.display();
    cout<<endl;

    
    return 0;
}