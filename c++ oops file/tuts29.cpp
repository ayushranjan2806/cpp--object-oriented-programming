/* default arguments of the constructor are those which are provide in the constructor declaration .If those values are not provided when 
callin the constructor the constructor uses default arguments automatically*/

#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    int data3;


public:
simple(int x, int y=23, int z=43){
    data1=x;
    data2=y;
    data3=z;

}
void printdata();




};
void simple:: printdata(){
    cout<<"the values of data1="<<data1<<",data2="<<data2<<"and data3="<<data3<<endl;
}
int main(){
    simple c1(2);
    c1.printdata();
    simple c2(3,4,6);
    c2.printdata();
    // simple c(5,6);
    // c.printdata();
    return 0;
}