#include<iostream>
using namespace std;
class employee 
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1); //function declaration
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of a is "<<b<<endl;
        cout<<"the value of a is "<<c<<endl;
        cout<<"the value of a is "<<d<<endl;
        cout<<"the value of a is "<<e<<endl;




    }
};
void employee :: setdata(int a1 ,int b1 , int c1){
a=a1;
b=b1;
c=c1;
    }



int main(){
    employee harry;
    harry.e =23;
    harry.d=45;

    harry.setdata(3,4,5);
    harry.getdata();



  tdam5dvjjx   
    return 0;
}