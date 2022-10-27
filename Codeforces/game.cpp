#include <bits/stdc++.h>
using namespace std;
using ll = long long; 

void solve(){
    int n; cin>>n; 
        int arr[n+1]; 
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        ll sum =0;
        ll sum1 =n-1;
        for(ll i =1;i<n;i++){
              
            if(arr[i] == 1){
                sum =i;
            }
            else break;
        }
        for(ll i =n-2;i>=0;i--){
              
            if(arr[i] == 1){
                sum1 =i;
            }
            else break;
        }
        if(sum<sum1){
             cout<<sum1-sum<<endl;
        }
        else{
            cout<<0<<endl;
        }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {   
        solve();
    }
}