#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
    int id;
    float salary;
        Employee(int i){
            id = i;
            salary = 34;
        }
        Employee(){};
};
//Derived class
class programmer : public Employee{
    public:
        programmer(int i){
            id = i;
        }
};

int main(){
    // Employee san(1), sam(2);
    // cout<<san.salary<<endl;
    // cout<<sam.salary<<endl;
    programmer san1(5);
    cout<<san1.id;
    return 0;
}