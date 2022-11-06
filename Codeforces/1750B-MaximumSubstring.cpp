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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int onecount = count(all(s), '1');
    int zerocount = count(all(s), '0');
    int cnt = 0;
    int mx = 0;
    rep(i, n)
    {
        cnt = 0;
        if (s[i] == '1')
        {

            while (i < n && s[i] == '1')
            {
                cnt++;
                i++;
            }

            mx = max(mx, cnt);
            // onecount = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (s[i] == '0')
        {
            while (i < n && s[i] == '0')
            {
                cnt++;
                i++;
            }
            mx = max(mx, cnt);
        }
    }
    ll ans = 1LL * mx * mx;
    ll ans2 = 1LL * zerocount * onecount;
    cout << max(ans, ans2) << endl;
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