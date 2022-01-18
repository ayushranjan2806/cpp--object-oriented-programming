/* constructors:- A constructors is a special member function with the same name as the class
.the constructor doesn't have return type .constructor are used to initialize the objects of the class 
.constructor initialize the objects of its class .
constructors automatically invoked whenever object is created.*/
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void); //constructor dedcalration
    void print()
    {
        cout << "your number is : "<<a<<"+"<<b<<"i"<<endl;

    }
};
complex ::complex(void){ //----> default constructor as it takes no argument.
    a=10;
    b=0;

}
int main()

{
    complex c1;
    c1.print();

    return 0;
}


/* properties of constructor
1)A constructor should be declared in the public section of the class
2)They are automatically invoked whenever the object is created
3)They cannot return values and do not have return types
4)It can have default arguments
5)We cannot refer to their address
*/