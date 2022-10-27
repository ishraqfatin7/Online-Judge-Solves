
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
    ll n, m, x, ans = 0;
    cin >> n >> m;
    vector<ll> vec(n + 1, 0), a(n + 1, 0);
    rep1(i, n)
    {
        cin >> x;
        a[i] = max(a[i - 1], x);
        vec[i] = vec[i - 1] + x;
    }
    rep(i,m) 
    {
        cin >> x;
        ans = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << vec[ans - 1] << " ";
    }
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}