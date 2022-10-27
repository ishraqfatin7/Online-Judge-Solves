#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin >> tt;
   
    while (tt--)
    {
        int n;
        cin >>n; 
        ll arr[n];
        for(int i =0; i<n;i++){
            cin >>arr[i]; 
        }
        for(int i =0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        
    }
}
