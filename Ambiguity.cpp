#include<iostream>
using namespace std;

class A{
    public:
        void greet(){
            cout<<"GM!"<<endl;
        }
};
class B{
    public:
        void greet(){
            cout<<"GN!"<<endl;
        }
};
class C : public A, public B{
    public:
        void greet(){
            B :: greet();
        }
};

class D : public A{
    public :
        void greet(){
            cout<<"GA!"<<endl;
        }
};

int main(){
    // C objC;
    // objC.greet();
    D objD;
    objD.greet();
    return 0;
}