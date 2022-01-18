#include<iostream>
using namespace std;
class bigbasket{
    int id;
    float price;
    public:
    void setdata(int i ,float j){
        id=i;
        price=j;
    }

    void getdata(void){
        cout<<"code of the this item is"<<id<<endl;
        cout<<"price of the item is :"<<price<<endl;

    }


};
int main(){
    int size=4;
    bigbasket *ptr =new bigbasket[size];
    bigbasket *ptrtemp=ptr;
    int p , i;
    float q ;

    for (int i = 0; i < size; i++)
    {
        cout<<"enter the id number and price  :"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;

    }
    for (int i = 0; i < size; i++)
    {
        cout<<"item number is:"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    

    
    
    return 0;
}