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
const int N = 1e4 + 9;
int n;
vector<ll> v(N + 1, 0);
string s;

void solve()
{
    cin >> n;
    vi v(n);
    string s;
    cin >> s;
    rep(i, n)
    {
        cin >> v[i];
    }
    int ans = 0;
    int mn = INT_MIN;
    rep(i, n)
    {
        if (s[i] == '1')
        {
            ans += max(v[i], mn);
        }
        if (s[i] == '0' || v[i]<mn)
        {
            mn = v[i];
        }
        
    }
    cout << ans << endl;
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
        solve();
    }
    return 0;
}