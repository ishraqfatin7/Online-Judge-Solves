#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define nl '\n'
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

void solve(int tt)
{
    int n, m;
    cin >> n >> m;
    if (m < n)
        cout << "NO" << nl;
    else if (!(n&1))
    {
        if (m % 2)
            cout << "NO" << nl;
        else
        {
            cout << "YES" << nl;
            for (int i = 1; i < n - 1; i++)
                cout << 1 << " ";
            cout << (m - (n - 2)) / 2 << " " << (m - (n - 2)) / 2 << endl;
        }
    }
    else
    {

        cout << "YES" << endl;
        for (int i = 1; i < n; i++)
            cout << 1 << " ";
        cout << m - n + 1 << endl;
    }
}

int main()
{
    FAST;
    // init();
    int tt;
    tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
}