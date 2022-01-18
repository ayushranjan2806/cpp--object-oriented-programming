#include<iostream>
using namespace std;
class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying the base class variable : "<<var_base<<endl;
    }

};
class derived:public Baseclass{
    public:
    int der_var;
    void display (){
        cout<<"the base class variable is :"<<var_base<<endl;
        cout<<"the derived class variable is:"<<der_var<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_baseclass;
    derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base=45;
    // base_class_pointer->der_var;  it will throw an  error because we can't set derived member variable using base class pointer

    derived *derived_class_pointer;
    // derived obj_derived;
    derived_class_pointer= &obj_derived;
    derived_class_pointer->der_var=4545;
    derived_class_pointer->var_base=6565;
    derived_class_pointer->display();
    



    
    return 0;
}