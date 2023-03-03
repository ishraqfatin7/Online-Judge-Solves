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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    string news = s, newt = t;
    sort(all(news));
    sort(all(newt));
    if (n < k + 1)
    {
        cout << "NO" << endl;
        return;
    }
    if (news != newt)
    {
        cout << "NO" << endl;
        return;
    }
    // vector<int> pos[26];
    // for (int i = 0; i < n; i++)
    // {
    //     pos[s[i] - 'a'].pb(i);
    // }
    ll lim = 2 * k + 1;
    if (n > lim or s == t)
    {
        cout << "YES" << endl;
        return;
    }
    lim = n - k;
    bool f = false;
    for (int i = lim; i < k;)
    {
        if (s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            i++;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}