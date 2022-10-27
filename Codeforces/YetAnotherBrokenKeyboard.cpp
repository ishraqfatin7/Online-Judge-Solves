#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> um;
    rep(i, k)
    {
        char x;
        cin >> x;
        um[x] = 1;
    }
    s.pb('@');
    ll ans = 0;
    ll cnt = 0;
    rep(i, s.size())
    {
        if (um[s[i]] == 1)
        {
            cnt++;
        }
        else
        {
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 0;
        }
    }
   // ans += (cnt * (cnt + 1)) / 2;
    cout << ans << '\n';
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