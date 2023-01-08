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
const int MOD = 1e9 + 7;
int max_demodogs(int n)
{
    return (n * n * (n + 1) * (n + 1)) / 4;
}


ll modularexpo(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void solve()
{

    ll n;
    cin >> n;
    ll n1 = n * (n + 1) % MOD * (2 * n + 1) % MOD;
    n1 *= modularexpo(6, MOD - 2) % MOD;
    ll n2 = (n - 1) * (n) % MOD * (n + 1) % MOD;
    n2 *= modularexpo(3, MOD - 2) % MOD;
    n1 = (n1 + n2) % MOD;
    n1 = n1 * 2022 % MOD;
    cout << n1 << endl;
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