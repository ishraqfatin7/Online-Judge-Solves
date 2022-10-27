
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
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << '\n';
    }
    else
    {
        s += s;
        set<ll> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'g')
            {
                st.insert(i);
            }
        }
        ll ans = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                ll k = *st.lower_bound(i);
                ans = max(ans, k - i);
            }
        }
        cout << ans << "\n";
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