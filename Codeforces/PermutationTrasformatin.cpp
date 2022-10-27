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

void dfs(int l, int r, int d, vi &v, vi &ans)
{

    if (l == r)
        return;
    int mxi = max_element(v.begin() + l, v.begin() + r) - v.begin();
    ans[mxi] = d;
    dfs(l, mxi, d + 1, v, ans);
    dfs(mxi + 1, r, d + 1, v, ans);
}

void solve()
{
    int n;
    cin >> n;
    vi v(n), ans(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    dfs(0, n, 0, v, ans);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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