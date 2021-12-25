#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["san"] = 1;
    marksMap["gwen"] = 10;
    marksMap["benten"] = 5;
    marksMap.insert({{"ghor", 4}, {"deep", 5}});
    map <string, int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<marksMap.max_size()<<endl;
    
    return 0;
}