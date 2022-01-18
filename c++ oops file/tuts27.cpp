#include <iostream>
using namespace std;
class complex
{
    int a, b;
    // complex(int x, int y);

public:
    complex(int x, int y);
    void printnum(void)
    {
        cout << "the number is :" << a << "+" << b << "i" << endl;
    }

};
complex::complex(int x, int y)
    { // This is paramterized constructors because it takes one or more arguments

        a = x;
        b = y;
    }
int main()
{
    complex c(2, 4);
    //---> implicit type call
    c.printnum();
    complex d =complex(6,7);
    //--> explicit type call
    d.printnum();

    return 0;
}