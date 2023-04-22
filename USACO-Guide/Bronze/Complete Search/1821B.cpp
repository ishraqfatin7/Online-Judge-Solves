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
    vi a(n), b(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    int l = INT_MAX, r = INT_MIN;
    rep(i, n)
    {
        if (a[i] != b[i])
        {
            l = min(l, i);
            r = max(r, i);
        }
    }
    int x = b[l], y = b[r];
    for (int i = l - 1; i >= 0; i--)
    {
        if (a[i] <= x)
        {
            l = i;
            x = a[i];
        }
        else
            break;
    }
    for (int i = r + 1; i < n; i++)
    {
        if (a[i] >= y)
        {
            r = i;
            y = a[i];
        }
        else break; 
    }
    cout << l + 1 << ' ' << r + 1 << endl;
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