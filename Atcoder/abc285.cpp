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
const int N = 100;
vi adj[N];

ll dfs(int a, int b)
{

    if (a == b)
        return 1;
    for (auto i : adj[a])
    {
        if (dfs(i, b) == 1)
            return 1;
    }
    return 0;
}

void solve()
{

    int w, d, h;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    int ans = abs(a - f);
    int ans1 = abs(b - g);
    int ans2 = h;
    int x1 = 2 * d - b - g + ans;
    int x2 = g + b + ans;
    int x3 = ans1 + 2 * w - a - f;
    int x4 = ans1 + a + f;
    int mn1 = min(x1, x2);
    int mn2 = min(x3, x4);
    cout << h + min(mn1, mn2) << endl;
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