/* case:-1
class B:class A{
    //order of execution of constructor-> first A()  second B()

};
case2:
class A : public B ,public C {
    // order of execution   of constructor -> first B() second c() third A()

};
case 3:
class A:   public B , virtual public c {
    // order of execution of constructor -> first c()  second B() third c()
};

*/
#include<iostream>
using namespace std;


class base1{
    int data1;
    public:
    base1(int i ){
        data1 =i ;
        cout<<"base1 class constructor called"<<endl;
    }
    void printdata1(void){
        cout<<"the value of data1 is "<<data1<<endl;

    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2 =i ;
        cout<<"base2 class constructor called"<<endl;
    }
    void printdata2(void){
        cout<<"the value of data1 is "<<data2<<endl;

    }
};
class derived : public base1 ,public base2{
    int derived1, derived2 ;
    public:
    derived(int a, int b ,int c, int d ,int e ): base1(a),base2(b){
        derived1=d;
        derived2=e;
        cout<<"derived class constructor called"<<endl;
    }
    void printdata3(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
    }
};

int main(){
    derived ayush(23,45,55,58,34);
    ayush.printdata1();
}

