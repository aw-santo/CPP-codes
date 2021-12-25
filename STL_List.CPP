#include<iostream>
#include<list>
using namespace std;

void display(list <int> &ls){
    list <int> ::iterator itr;
    for (itr = ls.begin(); itr != ls.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
}

int main(){
    list <int> ls1;
    ls1.push_back(6);
    ls1.push_back(1);
    ls1.push_back(7);
    ls1.push_back(3);
    display(ls1);

    list <int> ls2(4);
    list <int> :: iterator it = ls2.begin();
    *it = 4;
    it++;
    *it = 2;
    it++;
    *it = 8;
    it++;
    *it = 5;
    it++;
    display(ls2);
    ls1.sort();
    ls2.sort();
    ls1.merge(ls2);
    display(ls1);
    return 0;
}