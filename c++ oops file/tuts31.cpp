#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;

    }
    //when no copy constructor is found ,compiler supply its own copy constructors
    number(number &obj){
        cout<<"copy constructor called !!!"<<endl;
        a=obj.a;

    }
    void display() {
        cout<<"the number of this object is "<<a<<endl;

    }
};
int main(){
    number x, y (45),z(34),z2 ;
    z.display();
    x.display();
    y.display();

    number z1=z; //copy constructor is invoked.
    z1.display();

    z2=z;  // copy constructor in not invoked .
    z2.display();

    number z3(x);//copy constructor is invoked.
    z3.display();




    return 0;
}