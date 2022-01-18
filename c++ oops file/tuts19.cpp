//recap of c++
// c++ --> c with class  by stroustroup
// class --> extension of c
// class the build withg the idea of structure
// structure have some limitation
//1--> members are public
//2--> no methods
//class --> structure + more
//class --> class make the members as public and private
// structure in c++ are typedefed
/* yoy can also delcare object along the class as like this 
class employee {
    // class definition  

}ayush, piyush , ashish ;*/
//nest of the member  function

#include <iostream>
#include <string>

using namespace std;
class binary
{
    string s;

public:
    void read_binary(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read_binary(void)
{
    cout << "enter the binary number " << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
        
    }
    // for(int i =0;i<s.length();i++){
    //     cout<<s.at(i);
    // }
    // cout<<endl;
}
void binary :: display(void){
    for(int i =0;i<s.length();i++){
        cout<< s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary s;

    s.read_binary();
    //s.check_binary();
    s.display();
    s.ones_compliment();
    s.display();
    

    return 0;
}