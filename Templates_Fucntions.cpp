#include<iostream>
using namespace std;

// float funcAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAvg(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
template<class t1, class t2>
float funcAvg(t1 a, t2 b){
    float avg = (a+b)/2.0;
    return avg;
}
template<class T>
void swapp(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}

int main(){
    // float a = funcAvg(4, 3);
    // float a = funcAvg(4, 3.2);
    // cout<<"Average is : "<<a<<endl;
    char a = 'a', b = 'b';
    cout<<a<<"\t"<<b<<endl;
    swapp(a, b);
    cout<<a<<"\t"<<b;

    return 0;
}