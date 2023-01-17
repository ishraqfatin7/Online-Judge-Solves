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
    int n;
    cin >> n;
    vi v(n);
    int sum = 0;
    rep(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(all(v));
    if (sum == 360 || sum % 180 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (n == 1)
    {
        if (v[0] % 180 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }
    if (n == 2)
    {
        if (abs(v[0] - v[1]) == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        return;
    }
    if (sum - v[n - 1] == 0)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] + v[i + 1] == v[i + 2])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}