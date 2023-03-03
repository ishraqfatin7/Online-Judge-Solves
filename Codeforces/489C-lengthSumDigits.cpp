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
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool val(int s, int m)
{
    return 0 <= s && s <= 9 * m;
}

void solve()
{
    ll m, s;
    cin >> m >> s;
    if (!val(s, m) || s == 0 and m > 1)
    {
        cout << "-1 -1" << endl;
        return;
    }

    string mn = "", mx = "";
    ll s2 = s;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if ((i > 0 || j > 0 || m == 1) and val(s - j, m - i - 1))
            {
                mn += (char)(j + '0');
                s -= j;
                break;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 9; j >= 0; j--)
        {
            if ((i > 0 || j > 0 || m == 1) and val(s2 - j, m - i - 1))
            {
                mx += (char)(j + '0');
                s2 -= j;
                break;
            }
        }
    }
    cout << mn << " " << mx << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    /// cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}