/* friend class and friend function example */
#include <iostream>
using namespace std;
class y;
class X
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void sumnum(X, y);
};
class y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
    friend void sumnum(X, y);
};
void sumnum(X o1, y o2)
{
    cout << "the summing of the X and y is" << o1.data + o2.num;
}
int main()
{
    X c1;
    y c2;
    c1.setData(56);
    c2.setData(67);
    sumnum(c1, c2);

    return 0;
}