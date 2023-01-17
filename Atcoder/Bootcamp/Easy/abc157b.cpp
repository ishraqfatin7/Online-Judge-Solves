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

void solve()
{
    vector<vector<int>> a(3, vector<int>(3));
    rep(i, 3)
    {
        rep(j, 3)
        {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n)
    {
        cin >> b[i];
    }
    rep(i, n)
    {
        rep(j, 3)
        {
            rep(k, 3)
            {
                if (a[j][k] == b[i])
                {
                    a[j][k] = 0;
                }
            }
        }
    }
    bool ok = false;
    rep(i, 3)
    {
        if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0)
        {
            ok = true;
        }
    }
    rep(i, 3)
    {
        if (a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0)
        {
            ok = true;
        }
    }

    if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0)
    {
        ok = true;
    }
    if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0)
    {
        ok = true;
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    FAST;
    int tt;
     tt = 1;
    //cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}