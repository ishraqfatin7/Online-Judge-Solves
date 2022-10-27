#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>
#define pll pair<ll, ll>
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
    int n, m;
    cin >> n >> m;
    int mn = min(n, m);
    int mx = max(n, m);
    if (n == 1 && m == 1)
    {
        cout << 0 << endl;
    }

    else
        cout << mn * 2 + mx - 2 << endl;
}

int main()
{
    FAST;
    int tt;
    // tc = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}