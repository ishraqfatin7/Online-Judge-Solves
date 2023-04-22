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
    int m, n;
    cin >> m;
    vector<vector<int>> v(m);
    map<int, int> s;
    vector<int> ans;
    rep(i, m)
    {
        cin >> n;
        rep(j, n)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    int f = 0;
    rrep(i, m)
    {
        int curr = -1;
        for (auto x : v[i])
        {
            if (!s.count(x) and curr == -1)
                curr = x;
            s[x] = 1;
        }
        if (curr == -1)
        {
            f = 1;
        }
        ans.push_back(curr);
    }
    if (f)
    {
        cout << -1 << endl;
        return;
    }
    reverse(all(ans));
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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