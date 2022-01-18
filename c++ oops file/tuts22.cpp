#include <iostream>
using namespace std;
class employee
{
    int Id;
    int salary;

public:
    void setData(void)
    {
        salary=12222;
        cout<<"enter the Id no."<<endl;

        cin>>Id;
    }
    void getData(void){
        cout<< "the Id of the employee is "<<Id<<endl;

    }

    
};
int main()
{
    employee gb[5];
    for (int i = 0; i < 4; i++)
    {
        gb[i].setData();
        gb[i].getData();
    }
    
    return 0;
}