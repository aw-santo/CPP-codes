#include <iostream>

using namespace std;
class binary
{
    string s;
    void chk_bin(void); // now we cant access it from outside the class or class funtctions !

public:
    void read(void);
    // void chk_bin(void);
    void onesCompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary no. : ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            exit(0);
        }
    }
}
void binary :: onesCompliment(void){
    chk_bin();  //nesting a class function inside another class function !
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
        
    }
    
}
void binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.onesCompliment();
    cout<<endl;
    b.display();
    return 0;
}