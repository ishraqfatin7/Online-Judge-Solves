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

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

int toggle(int n, int k)
{
    return (n & (1 << k));
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, n) cin >> v[i];
    unordered_map<int, int> m;

    rep(i, n)
    {
        rep(j, 31)
        {
            if (toggle(v[i], j))
            {
                m[j]++;
            }
        }
    }
    int cnt = 0;
    rep(i, 31)
    {
        if (m[i] > 0 && m[i] < n)
        {
            cnt += (1 << i);
        }
    }
    cout << cnt << endl;
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