#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st1 = "he is op";
    string st2;
    ofstream out("File_IO.txt");//writing in a file
    out<<st1;
    out.close();
    ifstream in("File_IO.txt");//reading a file
    getline(in, st2);//to get whole line
    // in>>st2;//fetches only first word
    cout<<st2;

    return 0;
}