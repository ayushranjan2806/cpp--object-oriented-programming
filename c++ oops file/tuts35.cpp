//protected class :- 
// Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived
//  class whereas private access modifiers cannot be accessed in the derived class

/*                      public derivation     private derivation     protected derivation  
    private member        not inherited        not inherited           not inherited  
   public member          protected            private                 protected  
   protected memnber       public              private                 protected

*/
#include<iostream>
using namespace std;
class base {
    protected:
    int a ;
    private:
    int b;
};

class derived : protected base{

};
int main(){
    base b;
    derived d;

    
    return 0;
}