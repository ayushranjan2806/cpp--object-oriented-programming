#include<iostream>
using namespace std;
class base1 {
    public:
    void greeting (){
        cout<<" how are feeling in this though era of life"<<endl;

    }

};
class base2{
    public:
    void greeting(){
        cout<<"kaisa lag rha aap ye though competitation life m "<<endl;

    }
};
class derived : public base1, public base2 {
        int a;
        public : 
        void greet (){
            base1:: greeting();

        }
};
int main(){
    derived D;
    D.greet();
    base1 B1;
    base2 B2;
    B1.greeting();
    B2.greeting();
    


    return 0;
}