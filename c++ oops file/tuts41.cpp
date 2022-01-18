#include <iostream>
using namespace std;
//The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.
class student
{
protected:
    int roll_no;

public:
    void set_roll_no(int roll)
    {
        roll_no = roll;
    }
    void display_roll_no()
    {
        cout << "Your  roll number is : " << endl;
    }
};
class test : virtual public student
{
protected:
    int programing, aptitude;

public:
    void set_marks(float m1, float m2)
    {
        programing = m1;
        aptitude = m2;
    }
    void display_makrs()
    {
        cout << "Your's result is here :" << endl
             << "programing :" << programing << endl
             << "aptitude : " << aptitude << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void display_result()
    {
        cout << "your score in the sports out of 10 :" << score << endl;
    }
};
class final_result : public test, public sports
{
    private:
    int total;
    public:
    void display(){
        total = programing+aptitude+score;
        display_makrs();
        display_result();
        cout<<"total score of the candidate is :"<<total<<endl;
    }

};
int main()
{
    final_result Ayush;
    Ayush.set_roll_no(18);
    Ayush.set_marks(67.76,89.78);
    Ayush.set_score(7);
    Ayush.display();
    return 0;
}