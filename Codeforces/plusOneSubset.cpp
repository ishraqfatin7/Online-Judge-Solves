#include<bits/stdc++.h>
using namespace std; 

int main() {

    int t;
    cin >>t; 
    while(t--){
        int n; 
        cin >> n;
        int arr[n];  
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr,arr+n);
        
        count =(arr[n-1]-arr[0]);
        cout <<count << endl;
        
       
        
        
    }

}