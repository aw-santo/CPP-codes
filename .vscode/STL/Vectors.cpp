#include<iostream>
#include<vector>
using namespace std;

void displayVec(vector <int> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d ",vec[i]);
    }
    printf("\n");
}

int main(){
    vector <int> vec1;
    int size, ele;
    printf("Enter the size :");
    scanf("%d",&size);
    printf("Enter elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&ele);
        vec1.push_back(ele);
    }
    
    displayVec(vec1);
    printf("%d",vec1.capacity());
    vec1.insert(vec1.begin(), 0);
    displayVec(vec1);
    printf("%d",vec1.capacity());
    return 0;
}