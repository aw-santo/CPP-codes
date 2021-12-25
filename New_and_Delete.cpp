#include<iostream>
using namespace std;

int main(){
    //Normal pointer
    // int a = 4;
    // int * p = &a;
    
    // //Dynamic allocation to pointer
    // int * ptr = new int(7);
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int * pointer = new int[3];
    pointer[0] = 0;
    pointer[1] = 1;
    pointer[2] = 2;
    cout<<*pointer<<endl;
    cout<<*pointer+1<<endl;
    cout<<*pointer+2<<endl;
    return 0;
}