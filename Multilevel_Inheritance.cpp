#include<iostream>
using namespace std;

class student{
    private:
        int roll;
    public:
        void setRoll(int);
        void getRoll(void);
};
void student :: setRoll(int r){
    roll = r;
}
void student :: getRoll(){
    cout<<"Roll No. is : "<<roll<<endl;
}
class marks : public student{
    protected:
        float math;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};
void marks :: setMarks(float m, float p){
    math = m;
    physics = p;
}
void marks :: getMarks(){
    cout<<"Marks in Math : "<<math<<" and in Physics : "<<physics<<endl;
}
class result : public marks{
    // protected:
    //     float percentage = (math+physics)/2;//cant access protected mem. directly!
    public :
        void displayResult(){
            getRoll();
            getMarks();
            cout<<"Result is : "<<(math+physics)/2<<"%"<<endl;
        }
};

int main(){
    result san;
    san.setRoll(28);
    san.setMarks(90, 94);
    san.displayResult();
    return 0;
}