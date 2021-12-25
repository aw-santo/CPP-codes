#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float rate;
    float returnAmt;
    public:
        BankDeposit();
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int R);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    rate = r;
    returnAmt = principal;
    for (int i = 0; i < years; i++)
    {
        returnAmt = returnAmt * (1+rate);
    }
    
}
BankDeposit :: BankDeposit(int p, int y, int R){
    principal = p;
    years = y;
    rate = float(R)/100;
    returnAmt = principal;
    for (int i = 0; i < years; i++)
    {
        returnAmt = returnAmt * (1+rate);
    }
    
}

void BankDeposit :: show(){
    cout<<"Principal value : "<<principal<<endl<<"Years : "<<years<<endl<<"Rate : "<<rate<<endl<<"Return amount : "<<returnAmt<<endl;
}

int main(){
    int p, y, R;
    float r;

    // BankDeposit b;
    // b.show();

    // cout<<"Enter pricipal-amt, years and rate : "<<endl;
    // cin>>p>>y>>R;
    // BankDeposit b1(p, y, R);
    // b1.show();

    // cin>>p>>y>>r;
    // BankDeposit b2(p, y, r);
    // b2.show();
    return 0;
}