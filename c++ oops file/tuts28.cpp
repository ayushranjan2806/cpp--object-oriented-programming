/* constructor overloading :- it is concept in which one class can have multiple constructor with different parameters .
 the match parameter will to that constructor function*/

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex()
    {
        a = 2;
        b = 2;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnum()
    {
        cout << "the number is :" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(2, 3);
    c1.printnum();
    complex c2;
    c2.printnum();
    complex c3(2);

    c3.printnum();

    return 0;
}
