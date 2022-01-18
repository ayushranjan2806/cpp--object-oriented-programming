#include<iostream>
using namespace std;
class bankdeposit{
    int Principal;
    int years;
    float interestrate;
    float Returnvalue;
public:
     bankdeposit(){}
    bankdeposit(int P,int y,float r);
    bankdeposit(int P,int y ,int r);
    void show();


};
bankdeposit:: bankdeposit(int P,int y,float r){
    Principal=P;
    years=y;
    interestrate=r;
    Returnvalue =Principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        Returnvalue=Returnvalue*(1+interestrate);
    }
    
}
bankdeposit::bankdeposit(int P,int y,int r){
    Principal=P;
    years=y;
    interestrate=float(r)/100;
    Returnvalue=Principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        Returnvalue=Returnvalue*(1+interestrate);

    }
    


}
void bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<Principal
        << ". Return value after "<<years
        << " years is "<<Returnvalue<<endl;
}
int main(){
    bankdeposit bd1,bd2,bd3;
    int P ;
    int y;
    float r ;
    int R;

    cout<< "enter the value of p , y ,r" <<endl;
    cin>>P>>y>>r;
    bd1=bankdeposit(P,y,r);
    bd1.show();

    cout<< "enter the value of p , y ,R" <<endl;
    cin>>P>>y>>R;
    bd2=bankdeposit(P,y,R);
    bd2.show();

    

    
    
    return 0;
}