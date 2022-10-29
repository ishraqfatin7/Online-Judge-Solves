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
const ll mod = 998244353 ; 
void solve()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll sum = (a % 998244353 * b % 998244353 * c % 998244353) % 998244353;
    ll sum2 = (d % 998244353 * e % 998244353 * f % 998244353) % 998244353;
    cout << (sum-sum2)%mod  << endl;
}

int main()
{
    FAST;
    int tt;

    tt = 1;
    // cin >> tt;
    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}