//  A template is believed to escalate the potential of C++ several 
//  fold by giving it the ability to define data types as
// parameters making it useful to
//   reduce repetitions of the same declaration of classes for different data types
/*
DRY Rule:
To understand the reason behind using templates, 
we will have to understand the effort behind declaring classes for
 different data types. Suppose we want to have a vector
  for each of the three(can be more) data types, 
  int, float and char. Then we’ll obviously 
  write the whole thing again and again making 
  it awfully difficult. This is where the saviour 
  comes, the templates. It helps parametrizing the 
  
  data type and declaring it once in the source 
  code suffice. Very similar to what we do in functions.
 It is because of this, also called, ‘parameterized classes’.*/

// syntax
#include<iostream>
using namespace std;
template <class T>
class vector{
    T *arr;
    int size;
    public:
     vector(T* arr){
         //code
     }

     //add other things

};
int main(){
    vector<float> myvec1();
    vector<char>myvec2();
    vector<int>myvec3();
    
    return 0;
}