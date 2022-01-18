// inheritance  is a process if inheriting attributes of the base class by a derived class. the syntax of the derived class is shown  
/* syntax:-
class {{derivede - class-name}}  : {{visibility -mode}}  {{base-class-name}} 

{
    class members / method/etc ...
}

rules
Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary =113;
    Employee(int inpid){
        id=inpid;

    }
    Employee(){} //bydefault constructors is creating

};
class Programmer : public Employee{
    public:
    int language_code =10;
    Programmer(int inpid){
        id =inpid;
    
    }
    void getData(){
        cout<<"programmer id no is : "<<id<<endl;

    }

};
int main(){
    Employee ayush_ranjan(3),piyush_kumar(4),sakshi(4);
    cout<<ayush_ranjan.salary<<endl;

    Programmer coder_pro(45);
    coder_pro.getData();
    
    return 0;
}