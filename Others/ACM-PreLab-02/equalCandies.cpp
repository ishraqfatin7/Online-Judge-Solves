#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    int n;
    cin >> n;
    ll arr[n];
    for(int i =0; i<n;i++){
        cin >>arr[i];
    }
    int MAX = *max_element(arr,arr+n);
    int MIN = *min_element(arr,arr+n);
    int ans = MAX-MIN; 
    ll sum =0;
    for(int i =0;i<n;i++){
      sum+=arr[i]-MIN;
    }
    cout<<sum<<endl;
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