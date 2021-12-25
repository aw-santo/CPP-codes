#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int a)
    {
        roll = a;
    }
    void getRoll()
    {
        cout << "Roll No. : " << roll << endl;
    }
};
class Exam : virtual public Student
{
protected:
    int math, physics;

public:
    void setMks(int m, int p)
    {
        math = m;
        physics = p;
    }
    void getMks()
    {
        cout << "Marks in Maths : " << math << endl
             << "Marks in Physics : " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void setScr(int sc)
    {
        score = sc;
    }
    void getScr()
    {
        cout << "Score in sports : " << score << endl;
    }
};
class Result : public Exam, public Sports
{
public:
    void display()
    {
        getRoll();
        getMks();
        getScr();
        cout << "Total score is : " << math + physics + score;
    }
};

int
main()
{
    Result san;
    san.setRoll(28);
    san.setMks(90, 94);
    san.setScr(9);
    san.display();
    return 0;
}