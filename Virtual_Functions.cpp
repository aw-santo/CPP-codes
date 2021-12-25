#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){
            cout<<"Display of CWH"<<endl;
        }
};
class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }
        // void display(){
        //     cout<<"This is "<<title<<" tutorial"<<endl;
        //     cout<<"Video's length : "<<videoLength<<" minutes"<<endl;
        //     cout<<"Rating of video : "<<rating<<" out of 5"<<endl;
        // }
};
class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int ws) : CWH(s, r){
            words = ws;
        }
        void display(){
            cout<<"This is "<<title<<" tutorial"<<endl;
            cout<<"Word count : "<<words<<" words"<<endl;
            cout<<"Rating of text : "<<rating<<" out of 5"<<endl;
            
        }
};

int main(){
    string title;
    float rating, vlength;
    int words;

    //for CWHVideo
    title = "Django Tutorial";
    rating = 4.92;
    vlength = 4.52;
    CWHVideo vT1(title, rating, vlength);
    // vT1.display();

    //for CWHText
    title = "Java Cheatsheet";
    rating = 4.65;
    words = 747;
    CWHText tT1(title, rating, words);
    // tT1.display();

    //pointing
    CWH * ptr[2];
    ptr[0] = &vT1;
    ptr[1] = &tT1;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}