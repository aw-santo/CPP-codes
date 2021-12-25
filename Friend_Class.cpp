#include <iostream>
using namespace std;

class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;
    // friend int calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int calculator ::sumCompComplex(Complex o1, Complex o2);
    friend class calculator;

public:
    // friend int sumComplex(Complex o1, Complex o2);
    void setNo(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printNo(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNo(1, 4);
    o2.setNo(5, 7);
    calculator c;
    int res = c.sumRealComplex(o1, o2);
    cout << res<<endl;
    int resc = c.sumCompComplex(o1, o2);
    cout << resc;
    return 0;
}