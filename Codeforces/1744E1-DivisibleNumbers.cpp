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
const int MAX = 1e5;

vector<int> divisor[MAX + 1];

void sieve()
{
    for (int i = 1; i <= MAX; ++i)
    {
        for (int j = i; j <= MAX; j += i)
            divisor[j].push_back(i);
    }
}

ll lcm(ll a, ll b)
{
    return a * b / __gcd(a, b);
}
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = -1, y = -1;
    ll ans = a * b;
    for (ll i = a + 1; i <= c; i++)
    {
        ll done = __gcd(ans, i);
        ll req = a * b / done;

        ll mul = b / req + 1;
        if (req * mul <= d)
        {
            x = i;
            y = req * mul;
            break;
        }
    }

    cout << x << " " << y << endl;
}

int main()
{
    FAST;
    int tt;
    sieve();
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