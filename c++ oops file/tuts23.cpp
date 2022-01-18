/* friends function :- friend function are those  functions that have the right to access the private
 members of the class even though they are not define inside the class .
 IT is neccessary to write  the prototype of the friend function */

#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex d1, d2, sum;
    d1.setData(2, 5);
    d1.printnumber();

    d2.setData(5, 6);
    d2.printnumber();
    sum = sumcomplex(d1, d2);
    sum.printnumber();

    return 0;
}


/* properties of friend function:-
1. not in the scoope of class 
2:-since it is not in the scope of the class, it cannot called from the object of that class.d1.sumcomplex()==invalid 
3:- can be invoved without the help of any object 
4:- usally contains the object as argument 
5:- can be declared inside public or private  section of the class\
6:-it cannot be access the member directly  by their name and need object_name.member_name  to access any number
*/