#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"Id of item : "<<id<<endl;
            cout<<"Price of item : "<<price<<endl;
        }
};

int main(){
    int p, size = 3;
    float q;
    ShopItem * ptr = new ShopItem[size];
    ShopItem * tempPtr = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter ID and Price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item : "<<i+1<<endl;
        tempPtr->getData();
        tempPtr++;
    }
    
    
    return 0;
}