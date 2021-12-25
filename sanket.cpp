#include<iostream>
using namespace std;
class A{
    public:
        int b =5;
};
class B : public A{
    public:
        B(int a){
            b = a;
            cout<<b;
        }
};
int main(){
    B b(4);
    return 0;
}