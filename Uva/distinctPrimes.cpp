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
const int N = 1e6 + 9;
bool f[N];
vll res;
ll cnt[N];
// void calc(ll level, ll n)
// {
//     if (level == 3)
//     {
//         res.pb(n);
//         return;
//     }
//     for (int i = 0; i < primes.size(); i++)
//     {
//         if (!vis[primes[i]])
//         {
//             vis[primes[i]] = true;
//             calc(level + 1, n * primes[i]);
//         }
//     }
// }

void sieve()
{
    f[1] = true;
    for (int i = 2; i < N; i++)
    {
        if (!f[i])
        {
            for (int j = 1LL * 2 * i; j <= N; j += i)
            {
                cnt[j]++;
                f[j] = true;
            }
        }
    }

    // cout << primes.size() << endl;
}

void solve()
{
    ll n;
    cin >> n;
    cout << res[n - 1] << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    sieve();
    for (int i = 2; i < N; i++)
    {
        if (cnt[i] >= 3)
        {
            res.pb(i);
        }
    }
    // sort(all(res));
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}