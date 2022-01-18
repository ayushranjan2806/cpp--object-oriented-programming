#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int baseint2;

public:
    void set_base2int(int a)
    {
        baseint2 = a;
    }
};
class base3
{
protected:
    int baseint3;

public:
    void set_base3int(int a)
    {
        baseint3 = a;
    }
};
class derived : public base1, public base2, public base3
{

public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << baseint2 << endl;
        cout << "The value of Base3 is " << baseint3 << endl;
        cout << "The sum of these values is " << base1int + baseint2 + baseint3 << endl;
    }
};

int main()
{
    derived ayush;
    ayush.set_base1int(34);
    ayush.set_base2int(45);
    ayush.set_base3int(67);
    ayush.show();

    return 0;
}