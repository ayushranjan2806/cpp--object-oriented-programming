#include<iostream>
using namespace std;
class complex {
    int real, imaginary;
    public:
    void setdata(int i,int j){
        real=i;
        imaginary=j;

    }
    void getdata(){
        cout<<"the value of the imaginary number is :"<<imaginary<<endl;
        cout<<"the value of the real part  number is:"<<real<<endl;

    }





};
int main(){
    //complex c1;
    //complex *ptr =&c1;
    // another way to execute this code
    complex *ptr = new complex[4];


    // (*ptr).setdata(23,45);
    // (*ptr).getdata();

    //another way to execute this code method

    ptr+1->setdata(45,67);
    ptr->getdata();

    complex *ptrtemp=ptr;
    ptrtemp->getdata();

    
    return 0;
}