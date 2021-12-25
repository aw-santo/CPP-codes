#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"Real part : "<<real<<endl;
            cout<<"Imaginary part : "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // Complex c1;
    // Complex * ptr = &c1;
    // Complex * ptr = new Complex;
    // (*ptr).setData(1, 54);
    // (*ptr).getData();
    // ptr->setData(1, 54);
    // ptr->getData();

    Complex * ptr1 = new Complex[3];
    ptr1->setData(1,1); 
    (ptr1+1)->setData(2,2); 
    (ptr1+2)->setData(3,3);
    ptr1->getData(); 
    (ptr1+1)->getData(); 
    (ptr1+2)->getData(); 
    return 0;
}