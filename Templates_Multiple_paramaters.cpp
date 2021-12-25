#include<iostream>
using namespace std;

// class myClass{
//     public:
//         int data1;
//         char data2;
//         void display(){
//             cout<<this->data1<<endl<<this->data2<<endl;
//         }
// }
//using custom datatype!☻
template <class t1 = int, class t2 = float>//default parameters
// template <class t1, class t2>
class myClass{
    public:
        t1 data1;
        t2 data2;
        myClass(t1 a, t2 b) : data1(a), data2(b){}
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    // myClass <int, char>mc(4, 's');
    // mc.display();
    // myClass <int, float>mc(4, 4.12345);
    // mc.display();
    // myClass <char, bool>mc('4', false);
    // mc.display();
    myClass <> mc1(1, 2.34);//default datatypes to the argument
    mc1.display();
    return 0;
}