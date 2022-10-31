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
    string s;
    cin >> s;
    ll n = s.size();
    ll res = 0;
    ll curr = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            curr++;
        }
        else
        {
            curr--;
        }
        if (curr < 0)
        {
            res += i + 1;
            curr = 0;
        }
    }
    // {
    //     curr = init;
    //     bool f = true;
    //     for (int i = 0; i < n; i++)
    //     {
    //         res++;
    //         if (s[i] == '-')
    //         {
    //             curr--;
    //         }
    //         else
    //         {
    //             curr++;
    //         }
    //         if (curr < 0)
    //         {
    //             f = false;
    //             break;
    //         }
    //     }

    //     if (f)
    //     {
    //         break;
    //     }
    // }

    cout << res+n << endl;
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