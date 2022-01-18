#include <iostream>
#include<cmath>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << " the points is (" << x<<"," << y << ")" << endl;


    }


     friend double distancebetween( point p1,point p2);
    //     double r =sqrt(pow(p1.x-p2.x),2)+sqrt(pow(p1.y-p2.y,2));
    //     return r;


    // }
};
    double distancebetween( point p1,point p2){
     double res=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y, 2));
        return res;


    }
int main()

{
    point p(1,6);
    p.display();
    point q(4,8);
    q.display();
    double result=distancebetween(p,q);
    cout<<"the distance between p and q is:"<<result<<endl;


    return 0;
