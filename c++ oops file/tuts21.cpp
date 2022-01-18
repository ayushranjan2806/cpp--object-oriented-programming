/* static data members :- when a static data member is created then there is only single copy of data member
 which is shared between all the objects of class*/
#include <iostream>
using namespace std;
class employee
{
    int id;
   static int count ;

public:
    void setData(void)
    {
        cout << "enter the id number" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the Id of the employee is" << id << "and the employee number is " << count << endl;
    }
    static void getCount(void)
    {
        cout << "the value of the count " << count << endl;
    }
};
int employee::count =100;//by default it is zero.

int main()
{
    employee ayush, piyush;
    ayush.setData();
    ayush.getData();
    employee::getCount();

    piyush.setData();
    piyush.getData();
    employee::getCount();


    return 0;
}