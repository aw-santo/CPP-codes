#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

// void displayArr(array <int> &arr){
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
// }

int main(){
    const int size, ele;
    cout<<"Enter the size : ";
    cin>>size;
    array <int, size> arr1;
    cout<<"Enter the elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        arr1[i] = ele;
    }

    // displayArr(arr1);
    
    return 0;
}