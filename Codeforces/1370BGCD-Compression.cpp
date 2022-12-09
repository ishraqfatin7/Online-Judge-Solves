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
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve()
{
    int n;
    cin >> n;
    vi v(2*n+1);
    vi even, odd;
    rep1(i, 2 * n)
    {
        cin >> v[i];
        if (v[i] & 1)
        {
            odd.pb(i);
        }
        else
            even.pb(i);
    }
    vector<pii> ans;
    for (int i = 0; i + 1 < odd.size(); i += 2)
        ans.push_back({odd[i], odd[i + 1]});
    for (int i = 0; i + 1 < even.size(); i += 2)
        ans.push_back({even[i], even[i + 1]});
    for (int i = 0; i < n - 1; i++)
        cout << ans[i].first << " " << ans[i].second << endl;
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