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
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vll v(k + 20, 0);
    unordered_map<ll, ll> um;
    bool f = false;
    ll total = m * n - 2;
    ll x = k;
    rep1(i, k)
    {
        cin >> v[i];
    }
    rep1(i, k)
    {
        total--;
        um[v[i]] = 1;
        if (!total)
        {
            f = true;
        }
        while (um[x] == 1)
        {
            total++;
            x--;
        }
    }
    if (!f)
    {
        cout << "YA" << endl;
    }
    else
        cout << "TIDAK" << endl;
    // cout << 2 * mx - mn - f << endl;
}

int main()
{
    FAST;
    int tt;

    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}