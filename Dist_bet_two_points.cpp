#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    friend void dist(point, point);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
};

void dist(point o1, point o2){
    cout<<"The dist bet ("<<o1.x<<", "<<o1.y<<") and ("<<o2.x<<", "<<o2.y<<") is : "<<sqrt(((o2.x-o1.x)*(o2.x-o1.x)) + ((o2.y-o1.y) * (o2.y-o1.y)));
}

int main(){
    point p1(1, 3);
    point p2(2, 5);
    dist(p1, p2);
    return 0;
}