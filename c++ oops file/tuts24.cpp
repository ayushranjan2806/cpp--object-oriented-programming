/* memeber function in c++ :- friend funtion are those function that have access to private member of the class in which they are declared .the 
main thing to note here is that only that function can access member function which friend of other function*/

#include <iostream>
using namespace std;
class complex;
class calculator

{
   
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex,complex);
    
};
class complex

{
    friend class calculator;
    int a, b;
    friend int calculator ::sumRealcomplex(complex, complex);
    // friend int calculator ::sumcompcomplex(complex, complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printresult()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int calculator :: sumRealcomplex(complex o1, complex o2);
{
    return (o1.a+o2.a);
}

// }
// int calculator:: sumcompcomplex(complex o1 ,complex o2){
//     return(o1.b+o2.b)

// }
int main()
{
    complex c1, c2;
    c1.setnumber(2, 3);
    c2.setnumber(4, 6);
    return 0;
}