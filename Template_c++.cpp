#include<iostream>
using namespace std;

template <class T>
class Vector{
    public:
        T a;
        T b;
        T c;
        Vector(T a, T b, T c){
            this->a = a;
            this->b = b;
            (*this).c = c;
        }
        void getData(){
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
            cout<<"c : "<<c<<endl;
        }
};

int main(){
    Vector <int> v1(1, 2, 3);
    v1.getData();
    cout<<endl<<endl;
    Vector <float> v2(1.1, 2.2, 3.30);
    v2.getData();
    cout<<endl<<endl;
    Vector <char> v3('a', 'b', 'c');
    v3.getData();

    return 0;
}