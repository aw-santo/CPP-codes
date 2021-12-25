#include <iostream>
#include<iomanip>
using namespace std;
int c = 45;

int main()
{
    // int n1, n2;
    // cout << "Enter the value of no.1:\n";
    // cin >> n1;
    // cout << "Enter the value of no.2:\n";
    // cin >> n2;
    // int c = n1 + n2;

    // cout << "The sum is " << c << endl; //for local 'c'
    // cout << "The value of glob c is " << ::c;   //for global 'c'

    //Literals

    // cout<<"size of 34.4 : "<<sizeof(34.4)<<endl;
    // cout<<"size of 34.4f : "<<sizeof(34.4f)<<endl;
    // cout<<"size of 34.4F : "<<sizeof(34.4F)<<endl;
    // cout<<"size of 34.4l : "<<sizeof(34.4l)<<endl;
    // cout<<"size of 34.4L : "<<sizeof(34.4L)<<endl;

    // Ref variable

    // int x = 2;
    // int & y = x;
    // cout<<"x : "<<x<<endl;
    // cout<<"y : "<<y<<endl;

    //Typecasting

    // int x = 4;
    // float y = 23.41;
    // cout<<"x : "<<x<<endl;
    // cout<<"y : "<<y<<endl;
    // cout<<"y : "<<int(y)<<endl;
    // cout<<"y : "<<(int)y<<endl;

    //constants

    // const int x = 4;
    // cout << x " : " << endl;
    // // x = 9;
    // // cout << x << " : " << endl;

    //Manipulators
    // 1. endl
    // 2. setw
    cout<<setw(7)<<45<<endl;
    cout<<45<<endl;

    return 0;
}
