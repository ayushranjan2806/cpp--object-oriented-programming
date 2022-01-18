/* initilization  list in constructors is another concept of initilizing the data memebers of the class 

syntax of initilization list in constructor:
constructors (argument-lis): initilization -section
{
    assignment+other code;
}

*/
#include<iostream>
using namespace std;
class simple{
    int value1;
    int value2 ;
    public :
    simple(int i , int j ): value1(i),value2(value2+j){
        cout<<"constructors executed successfully "<<endl;
        cout<<"value of a is :"<<value1<<endl;
        cout<<"value of b is :"<<value2<<endl;
    }


};



int main(){
    simple s(34,56);

    return 0;
}