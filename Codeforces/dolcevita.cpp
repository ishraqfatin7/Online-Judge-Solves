#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, x;
    cin >> n >> x;
    ll arr[n];
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll sum =0, i =0; 
    ll sum1 =0;
    for(i =0;i<n;i++){
        sum+=arr[i];
        if(x>=sum){
            
            sum1+=1+(x-sum)/(i+1);
        }
        
    }
    cout<<sum1<<endl;
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