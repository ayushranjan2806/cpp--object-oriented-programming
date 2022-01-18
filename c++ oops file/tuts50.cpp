#include<iostream>
using namespace std;
class loop{
    protected:
    string title;
    float rating;
    public:
    loop(string s, float r){
        title=s;
        rating=r;
    }
    virtual void display(){

    }
};
class loopvideo:public loop{
float videolength;
public:
loopvideo(string s,float r ,int vl):loop(s,r){
    videolength=vl;

}
void display(void){
    cout<< "This is amazing video of title" <<title<<endl;
    cout<<"Rating of the video out of 5 star:"<<rating<<endl;
    cout<<"length of the video :"<<videolength<<endl;
}


};

class looptext: public loop{
    int words;
    public:
    looptext(string s , float r ,int wc):loop(s,r){
        words = wc;

    }

    void display(void){
        cout<<"This is amazing text tutorial with title"<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<"out of 5 star "<<endl;
        cout<<"Numbers of words in the test tutorial is :"<<words<<endl;
    }
    
};

int main(){
    string title;
    float rating ,vlen;
    int words;

    title= "machine learning tuts";
    vlen=46.6;
    rating=45.76;
    loopvideo  yovideo(title,vlen,rating);

    title="logistics regression ";
    rating =5.6;
    words=1008;

    looptext  yotext(title,rating,words);

    loop *tuts[2];
    tuts[0] = &yovideo;
    tuts[1]=  &yotext;

    tuts[0]->display();
    tuts[1]->display();



    
    return 0;
}