#include<bits/stdc++.h>
using namespace std; 

int main() {
    int x; 
    int arr[3];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 3; i++)
    {
        cin >>arr[i];
    }
    sort(arr,arr+n);
    cout<<abs(arr[0]-arr[1]+arr[1]-arr[2]);
}
