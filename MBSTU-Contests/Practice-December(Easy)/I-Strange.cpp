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

const int N = 1e5 + 9;

void solve()
{
    int n;
    cin >> n;
    ll p = 0;
    int cnt = 0;
    int a[n + 1];
    iota(a, a + n + 1, 0);
    vi v;
    v.pb(1);
    for (ll i = 1; p <= N; i++)
    {
        p = pow(9, i);
        v.pb(p);
       // cnt++;
    }
    p = 0;
    for (ll i = 1; p <= N; i++)
    {
        p = pow(6, i);
        v.pb(p);
        //cnt++;
    }
    sort(all(v));
    for (int i = 1; i <= n; i++)
    {
        for (int x : v)
        {
            if (x > i)
            {
                break;
            }
            a[i] = min(a[i], a[i - x] + 1);
        }
    }
    cout << a[n] << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}