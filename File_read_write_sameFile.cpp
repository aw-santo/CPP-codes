#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //BY constructors provided by the class fstreambase 
    // string st = "hello this is san";
    // ofstream sOut("File_read_write_sameFile.txt");
    // sOut<<st;
    // sOut.close();

    // string st1;
    // ifstream sIn("File_read_write_sameFile.txt");
    // sIn>>st1;
    // cout<<st1;
    // sIn.close();

    //By functions of class fstreambase
    // string st = "hello this is san";
    // ofstream out;
    // out.open("File_read_write_sameFile.txt");
    // out<<st;
    // out.close();

    ifstream in;
    string st1;
    in.open("File_read_write_sameFile.txt");
    // in>>st1;
    while (!in.eof())
    {
        getline(in, st1);
        cout<<st1<<endl;
    }
    in.close();
    

    return 0;
}