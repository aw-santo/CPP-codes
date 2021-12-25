#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    protected:
        int num1, num2;
    public:
        void setNumSimple(){
            cout<<"Enter 1st No. : ";
            cin>>num1;
            cout<<endl<<"Enter 2nd No. : ";
            cin>>num1;
            cout<<endl;
        }
        void displaySimple(){
            cout<<"Addition : "<<num1 + num2<<endl;
            cout<<"Subtraction : "<<num1 - num2<<endl;
            cout<<"Multiplication : "<<num1 * num2<<endl;
            cout<<"Division : "<<num1 / num2<<endl;
        }
};
class scientificCalculator{
    protected:
        int num3, num4;
    public:
        void setNumScien(){
            cout<<"Enter 1st No. : ";
            cin>>num3;
            cout<<"Enter 2nd No. : ";
            cin>>num4;
            cout<<endl;
        }
    public: 
        void displayScien(){
            cout<<"sin("<<num3<<") : "<<sin(num3)<<" and sin("<<num4<<") : "<<sin(num4)<<endl;
            cout<<"cos("<<num3<<") : "<<cos(num3)<<" and cos("<<num4<<") : "<<cos(num4)<<endl;
            cout<<"tan("<<num3<<") : "<<tan(num3)<<" and tan("<<num4<<") : "<<tan(num4)<<endl;
            cout<<"cot("<<num3<<") : "<<atan(num3)<<" and cot("<<num4<<") : "<<atan(num4)<<endl;
        }
};
class HybridCal : public simpleCalculator, public scientificCalculator{
    // public :
    //     void display3(){
    //         // simpleCalculator :: setNum(n1, n2);
    //         cout<<"Result of simple calculator : "<<endl;
    //         simpleCalculator :: display1();
    //         cout<<endl<<endl<<"Result of scientific calculator : "<<endl;
    //         scientificCalculator :: display2();
    //     }
};

int main(){
    // simpleCalculator c1;
    // c1.setNum(5, 4);
    // c1.display1();
    // scientificCalculator c2;
    // c2.setNum(60, 30);
    // c2.display1();
    // c2.display2();
    // hybridClass c3;
    // c3.setNum1(5, 4);
    // c3.setNum2(60, 30);
    // c3.display3();
    HybridCal san;
    // san.setNumSimple();
    // san.displaySimple();
    san.setNumScien();
    san.displayScien();
    return 0;
}