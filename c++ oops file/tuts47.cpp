#include<iostream>
using namespace std;
class A{
    int a ;
    public:
    // void setdata(int a){
    //     this ->a= a;

    // }
    A & setdata(int a){
        this ->a =a;
        return *this;
    }
    void display(void){
        cout<<"the value of a is :"<<a<<endl;
    }



};
int main(){
    A x;
    x.setdata(56).display();
    // x.display();
    
    return 0;
}