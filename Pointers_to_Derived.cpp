#include<iostream>
using namespace std;

class Base{
    public:
        int varBase = 5;
        void display(){
            cout<<"Base var is "<<varBase<<endl;
        }
};
class Derived : public Base{
    public:
        int varDerived = 10;
        void display(){
            cout<<"Base var is "<<varBase<<endl;
            cout<<"Derived var is "<<varDerived<<endl;
        }
};

int main(){
    Base * base_pointer;
    Derived derivedObj;
    // base_pointer = &derivedObj;
    // base_pointer->varBase = 87;
    // base_pointer->display();
    // Derived * derived_pointer = &derivedObj;
    // derived_pointer->display();
    return 0;
}