#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    int arr[102];
    int arr1[102];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

    }

    for (int i = 1; i <= n; i++)
    {
        arr1[arr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout <<arr1[i]<<" ";
    }
    
}