#include<iostream>

using namespace std;

int main(){
    int n;
    int k = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    
    for (int i = 0; i < n; i++)
    {
        if (i<n/2)
        {
            while (arr[i] >= 10)
            {
                arr[i] = arr[i]/10;
            }
                k = k * 10 + arr[i];
            
        }
        else{
            arr[i] = arr[i] % 10;
            k = k * 10 + arr[i];
        }
        
    }
    if (k % 11 == 0)
    {
        cout<<"OUI";
    }
    else{
        cout<<"NON";
    }
    
    
    
    
    return 0;
}