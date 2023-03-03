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
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    ll half = sum / 2;
    vi v1, v2;
    for (int i = n; i >= 1; i--)
    {
        if (half - i >= 0)
        {
            v1.pb(i);
            half -= i;
        }
        else
        {
            v2.pb(i);
        }
    }
    cout << v1.size() << endl;
    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for (auto x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    //cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}