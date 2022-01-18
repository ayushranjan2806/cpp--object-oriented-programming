// memory allocation in cpp
// memory is allocated for the different variable  is diferent in cpp
//array is used to store different variable of same data type

#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) 
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};
void Shop ::setprice(void)
{
    cout << "enter ID no of  your Item" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter the price of the Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id" << itemId[i] << "is" << itemPrice[i] << endl;
    }
}
int main()
{
    Shop d;

    d.initcounter();
    int n;
    cout << "choose number of item which is to be enter" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        d.setprice();
    }

    d.displayprice();

    return 0;
}