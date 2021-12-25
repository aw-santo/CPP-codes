#include <iostream>
using namespace std;

class base1
{
protected:
    int base1Var;

public:
    void setbase1Var(int a)
    {
        base1Var = a;
    }
};
class base2
{
protected:
    int base2Var;

public:
    void setbase2Var(int a)
    {
        base2Var = a;
    }
};
class base3
{
protected:
    int base3Var;

public:
    void setbase3Var(int a)
    {
        base3Var = a;
    }
};
class derived : public base1, public base2, public base3
{
// protected:
    // int add = base1Var + base2Var + base3Var;//cant access protected mem. directly!

public:
    void sum()
    {
        cout << "The sum is : " << base1Var + base2Var + base3Var << endl;
    }
};

int main()
{
    derived san;
    san.setbase1Var(4);
    san.setbase2Var(2);
    san.setbase3Var(8);
    san.sum();
    return 0;
}