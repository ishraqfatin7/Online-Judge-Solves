#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i+1]-arr[i]-1;
    }
    if(sum<=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}