#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
#define pii pair<int, int>
#define pll pair<ll, ll>
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
#define nl '\n';
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi res(n, 1);
    while(true)
    {
        bool f = false;
        rep(i, n - 1)
        {
            if (s[i] == 'L' && res[i] <= res[i + 1])
            {
                res[i] = res[i + 1] + 1;
                f = true;
            }
            else if (s[i] == 'R' && res[i] >= res[i + 1])
            {
                res[i + 1] = res[i] + 1;
                f = true;
            }
            else if (s[i] == '=' && res[i] != res[i + 1])
            {
                res[i] = max(res[i], res[i + 1]);
                res[i + 1] = max(res[i], res[i + 1]);
                f = true;
            }
        }
        if (!f)
            break;
    }
    rep(i, n)
            cout
        << res[i] << " ";
    cout << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}