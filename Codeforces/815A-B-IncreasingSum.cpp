#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);


//815-A
// ll a, b, c, d;
// cin >> a >> b >> c >> d;
// ll s = a * d;
// ll s1 = c * b;
// if (s == s1)
//     cout << 0 << endl;
// else if (s == 0 || s1 == 0)
//     cout << 1 << endl;
// else if ((s % s1) == 0 || (s1 % s) == 0)
//     cout << 1 << endl;
// else
//     cout << 2 << endl;
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, n) cin >> v[i];
    sort(all(v));
    cout << v[n - 1] - v[0] + v[n-2]-v[1] << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;
    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}