#include<iostream>

using namespace std;

int fact(int a){
    if (a==0 || a==1)
    {
        return 1;
    }
    else if (a<0)
    {
        return -1;
    }
    
    else
    {
        return a*fact(a-1);
    }
    
    
}

int main(){

    int a;
    cout<<"Enter the no. : ";
    cin>>a;
    cout<<endl<<a<<"! = "<<fact(a);

    return 0;
}