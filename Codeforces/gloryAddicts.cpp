#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    // int one = 0, zero = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     if (arr[i])
    //     {
    //         one++;
    //     }
    //     else
    //         zero++;
    // }
    // int pair = min(one, zero);

    // cout << pair << endl;
    // for (int i = 0; i < n; i++)
    //     cin >> brr[i];

    // sort(brr, brr + n, greater<int>());
    // ll ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i < pair)
    //     {
    //         ans += brr[i] * 2;
    //     }
    //     else
    //     {
    //         ans += brr[i];
    //     }
    // }
    // cout << ans << endl;
    rep(i,n)cin >>arr[i]; 
    rep(i,n) cin >>brr[i]; 
    vector<pair<ll,ll>>v; 
    rep(i,n) v.pb({brr[i],arr[i]});
    sort(all(v),greater<pair<ll,ll>>());
    ll ans=0;
    
    
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}