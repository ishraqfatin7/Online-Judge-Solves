#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
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
    int n,l,r; cin >>n>>l>>r; 
    vi v(n);
    rep(i,n) cin >> v[i];
    sort(all(v));
    ll ans = 0;
    rep(i,n){
        int x = v[i];
        int y = l-x;
        int z = r-x;
        int p = lower_bound(all(v),y)-v.begin();
        int q = upper_bound(all(v),z)-v.begin();
        ans += q-p;
        if(y<=x && x<=z) ans--;
    }
    cout << ans/2 << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;

    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}