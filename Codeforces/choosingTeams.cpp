#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k; 
    cin >>n>>k; 
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+size);
    for (int i = 0; i < n; i++)
    {
        arr[i]+=k;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=5)
        {
            count++;
        }
        
    }
    cout <<count/3<<endl;
    
    
    
}