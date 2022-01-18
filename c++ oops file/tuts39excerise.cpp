/*Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? multiple 
    Q2. Which mode of Inheritance are you using? public mode
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?*/


#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator{
    int a, b;
    public :
    void GetSampledata(){
         cout<<"enter the value of a "<<endl;
         cin>>a;
         cout<<"enter the value of B "<<endl;
         cin>>b;
    }
    
    void PerformOperation(){
        cout<<"The value of a+b is :"<<a+b<<endl;
        cout<<"The value of a-b is : "<< a-b<<endl;
        cout<<"The value of a*b is :"<<a*b<<endl;
        cout<<"The value of a/b  is :"<<a/b<<endl;

    }
    
};

class ScientificCalculator{
    int a, b ;
    public :
    void Getdatainp(){
        cout<<"Enter  value of a : "<<endl;
        cin>>a;
        cout<<"enter the value of b :"<<endl;
        cin>>b;

    }
    void calcdata(){
        cout<<" The value of sine fun of a is :"<<sin(a)<<endl;
        cout<<" The value of sine fun of b is :"<<sin(b)<<endl;
        cout<<" The value of cosine fun of a is :"<<cos(a)<<endl;
        cout<<" The value of cosine fun of b is :"<<cos(b)<<endl;
        cout<<" The value of tan fun of a is :"<<tan(a)<<endl;
        cout<<" The value of tan fun of b is :"<<tan(b)<<endl;
        cout<<" The value of exponational of a is :"<<exp(a)<<endl;
        cout<<" The value of exponational of b is :"<<exp(b)<<endl;


    }

};
 class Hybridcalc: public SimpleCalculator,  public ScientificCalculator{

};
int main(){
    Hybridcalc C;
    C.GetSampledata();
    C.PerformOperation();

    
    C.Getdatainp();
    C.calcdata();
    

    

    
    return 0;
}