#include<iostream>
using namespace std;
class baseclass{
    public:
    int varbase1=23;
    virtual void display(){  //without use virtual function  it display base_class display function
        cout<<"1 displaying base class variable var_base"<<varbase1<<endl;
    }


};
class derived: public baseclass{
    public:
    int varderived=34;
    void display(){
        cout<<"displaying the base class variable var_base"<<varbase1<<endl;
        cout<<"displaying the derived class variable der_var"<<varderived<<endl;
    }

};

int main(){
baseclass *base_class_pointer;
baseclass obj_var;
derived der_obj;

base_class_pointer=&der_obj;
base_class_pointer->display();

    return 0;
}