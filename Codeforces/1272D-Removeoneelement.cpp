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
const int N = 2e5 + 5;
int dp1[N], dp2[N];

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    dp1[0] = 1;
    rep1(i, n - 1)
    {
        if (v[i] > v[i - 1])
        {
            dp1[i] = dp1[i - 1] + 1;
        }
        else
        {
            dp1[i] = 1;
        }
    }
    dp2[n - 1] = 1;
    rrep(i, n - 1)
    {
        if (v[i] < v[i + 1])
        {
            dp2[i] = dp2[i + 1] + 1;
        }
        else
        {
            dp2[i] = 1;
        }
    }
    int ans = 0;
    rep(i, n)
    {
        ans = max(ans, dp1[i]);
    }
    rep(i, n - 1)
    {
        if (v[i] < v[i + 2])
        {
            ans = max(ans, dp1[i] + dp2[i + 2]);
        }
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}