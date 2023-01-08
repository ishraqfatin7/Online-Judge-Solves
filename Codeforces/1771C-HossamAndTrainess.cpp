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
const int N = 1e6 + 5;
bool f[N];
vector<int> primes;
void sieve()
{
    f[1] = true;
    for (int i = 4; i <= N; i += 2)
    {
        f[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= N; j += 2 * i)
            {
                f[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
        {
            primes.pb(i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    map<ll, int> freq;

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        for (ll j = 0; primes[j] * primes[j] <= x; j++)
        {
            if (x % primes[j] == 0)
            {
                freq[primes[j]]++;
                while (x % primes[j] == 0)
                {
                    x /= primes[j];
                }
            }
        }
        if (x != 1)
        {
            freq[x]++;
        }
    }

    bool ok = false;
    for (auto p : freq)
    {
        if (p.second > 1)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    FAST;
    sieve();
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}