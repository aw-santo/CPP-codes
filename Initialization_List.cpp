#include <iostream>
using namespace std;

class Num
{
    int varA;
    int varB;

public:
    Num(int a, int b) : varA(a), varB(b){
        cout << "Inside the constructor!" < endl;
        cout << "Value of varA : " << varA << endl;
        cout << "Value of varB : " << varB << endl;
    }
};

int
main()
{
    Num first(1, 2);
    return 0;
}