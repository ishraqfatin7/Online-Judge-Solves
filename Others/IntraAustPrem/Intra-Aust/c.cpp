#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >>t; 
    while(t--){
        int x,i; 
        cin >> x>>i; 
        int arr[x];
        for (int i = 1; i <=x; i++)
        {
           cin >>arr[i]; 
        }
       swap(arr[i],arr[i+1]);
        
        for (int j = 1; j <=x; j++)
        {
            cout <<arr[j]<<" ";
        }
        
        cout <<endl;
        

    }
}