#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m; 
    cin >>n>>m;
    ll a[n],b[n]; 
    for (ll i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >>b[i];
    }
    ll count =0;
    for (ll i = 0; i < m; i++)
    {
        for(ll j =0; j<n;j++){
            if(b[i] ==a[j]){
                count++; 
                a[j] =0;
                if(count ==m){
                    break;
                }
            }
        }
    }
    if(count ==m){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
        
    }
    
    
}