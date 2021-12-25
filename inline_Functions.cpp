#include <iostream>

using namespace std;

inline int prod(int a, int b){
    return a*b;
}

float moneyReceived(int money, float f = 1.08){
    return money * f;
}

int main()
{

    // int a, b;
    // cout << "Enter the value of a and b : " << endl;
    // cin >> a >> b;
    // cout << "The product of a and b : " << prod(a, b)<<endl;
    int money = 100000;
    cout<<"Returns for normal person : "<<moneyReceived(money)<<endl;
    cout<<"Returns for VIP person : "<<moneyReceived(money, 1.1)<<endl;

    return 0;
}