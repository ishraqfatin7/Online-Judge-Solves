#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
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
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    unordered_map<int, int> um;
    rep(i, n)
    {
        cin >> a[i];
        um[a[i]]++;
    }
    int ans = n;
    for (auto x : um)
    {
        int cnt = x.S;
        if (x.F & 1)
        {
            auto it = um.find(x.F - 1);
            if (it != um.end())
            {
                cnt += um[x.F - 1];
            }
        }
        else
        {
            auto it = um.find(x.F + 1);
            if (it != um.end())
            {
                cnt += um[x.F + 1];
            }
        }
        ans = min(ans, n - cnt);
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}