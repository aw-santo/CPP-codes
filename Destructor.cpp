#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
        num(){
            count++;
            cout<<"Inside constructor for obj no."<<count<<endl;
        }
        ~num(){
            cout<<"Inside destructor for obj no."<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"Inside main"<<endl;
    num n1;  
    {
        cout<<"Entering block"<<endl;
        num n2, n3;
        cout<<"Exiting block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}