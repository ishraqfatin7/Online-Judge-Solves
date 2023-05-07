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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }
    ll k = n / 2;
    unordered_map<ll, ll> m1, m2;
    rep(i, n)
    {
        m1[s[i]]++;
    }
    rep(i, k)
    {
        if (s[i] == s[n - i - 1])
        {
            m2[s[i]]++;
        }
    }
    ll cnt = 0, mx = 0;
    for (auto x : m1)
    {
        mx = max(mx, x.S);
    }
    if (mx > k)
    {
        cout << -1 << endl;
        return;
    }
    ll mx1 = 0;
    for (auto x : m2)
    {
        mx1 = max(mx1, x.S);
        cnt += x.S;
    }
    int rem = cnt - mx1;
    if (mx1 > rem)
    {
        cout << mx1 << endl;
        return;
    }
    if (cnt % 2 == 0)
    {
        cout << cnt / 2 << endl;
    }
    else
    {
        cout << cnt / 2 + 1 << endl;
    }
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}