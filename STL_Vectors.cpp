#include<iostream>
#include<vector>
using namespace std;

void display(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector <int> vec1;
    int ele, size;
    // cout<<"Enter the size of vector : ";
    // cin>>size;
    cout<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the No. : ";
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }
    // display(vec1);
    // vec1.pop_back();

    vector <int> :: iterator iter = vec1.begin();//for insertion
    vec1.insert(iter, 5, 6);
    display(vec1);
    vec1.push_back(99);

    
    display(vec1);
    
    return 0;
}