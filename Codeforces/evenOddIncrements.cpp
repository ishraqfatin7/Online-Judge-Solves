/*
ID: ishraqf1
LANG: C++
TASK: ride
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int t)
{
    ll n, q;
    cin >> n >> q;
    ll a[n + 1];
    rep(i, n) cin >> a[i];
    vector<ll> even, odd;
    ll evenSum = 0, oddSum = 0;
    rep(i, n)
    {
        if (a[i] % 2 == 0)
        {
            even.pb(a[i]);
            evenSum += a[i];
        }
        else
        {
            odd.pb(a[i]);
            oddSum += a[i];
        }
    }
    ll evencount = even.size();
    ll oddcount = odd.size();
  
    ll sum = 0;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if (x == 0)
        {
            ll x = y * evencount;
            evenSum += x;
            if (y & 1)
            {
                oddcount += evencount;
                evencount = 0;
            }
        }
        else
        {
            ll x = y * oddcount;
            oddSum += x;
            if (y%2!=0)
            {
                evencount += oddcount;
                oddcount = 0;
            }
        }
        cout << evenSum + oddSum << endl;
    }
}
int main()
{
    FAST;

    int tt;
    tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
    return 0;
}