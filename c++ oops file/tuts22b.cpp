/* object can be passed as function arguments .This is useful when we want to assign the values of a passed object to the current objects*/
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void setdatasum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printdata(void){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;

    }
};
int main()
{
    complex d1,d2,d3;
    d1.setData(2,3);
    d1.printdata();

    d2.setData(4,5);
    d2.printdata();

    d3.setdatasum(d1,d2);
    d3.printdata();
    return 0;
}