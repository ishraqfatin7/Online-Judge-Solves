#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>>n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i]; 
    }
    int MAX = *max_element(arr,arr+n);
    int i =0; 
    int result = 0;
    for (int i = 0; i < n; i++)
    {
       int sum = MAX-arr[i];
       result+=sum;
    }
    
    cout <<result <<endl;
}