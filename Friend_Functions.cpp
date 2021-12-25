#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
friend Complex sumComplex(Complex o1, Complex o2);
    void setNo(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void getNo(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNo(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNo(1, 3);
    c2.setNo(5, 4);
    c1.getNo();
    c2.getNo();
    sum = sumComplex(c1, c2);
    sum.getNo();
    return 0;
}