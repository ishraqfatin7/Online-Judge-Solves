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

ll v[10];
ll ans = 0;
ll n;
ll d = 0;
ll dfs(int u)
{
    d++;
    ans += v[u];
    if (u == 7 && ans < n)
    {
        dfs(1);
    }
    if (ans < n)
    {
        dfs(u + 1);
    }
    return 0;
}

void solve()
{
    cin >> n;
    rep1(i, 7)
    {
        cin >> v[i];
    }
    dfs(1);
    if(d%7==0){
        cout << 7 << endl;
        return;
    }
    cout << d%7 << endl;
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