/* complex example of friend class*/
#include <iostream>

using namespace std;
class B;
class A
{
    int val1;
    friend void swapnum(A &, B &);

public:
    void setData(int c)
    {
        val1 = c;
    }

    void displayvalue()
    {
        cout << val1 << endl;
    }
    // friend void swapnum()
};

class B
{
    int val2;
    friend void swapnum(A &, B &);

public:
    void setData(int c)
    {
        val2 = c;
    }

    void displayvalue()
    {
        cout << val2 << endl;
    }
};
void swapnum(A &x, B &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    A oc1;
    B oc2;
    oc1.setData(56);
    oc2.setData(78);
    swapnum(oc1, oc2);
    cout << "The value of c1 after exchanging becomes: ";
    oc1.displayvalue();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.displayvalue();

    return 0;
}