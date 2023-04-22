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
    map<char, int> m;
    m['Q'] = 9;
    m['R'] = 5;
    m['B'] = 3;
    m['N'] = 3;
    m['P'] = 1;
    m['K'] = 0;
    m['q'] = -9;
    m['r'] = -5;
    m['b'] = -3;
    m['n'] = -3;
    m['p'] = -1;
    m['k'] = 0;
    int ans = 0;
    rep(i, 8)
    {
        string s;
        cin >> s;
        rep(j, 8)
        {
            ans += m[s[j]];
        }
    }
    if (ans > 0)
        cout << "White" << endl;
    else if (ans < 0)
        cout << "Black" << endl;
    else
        cout << "Draw" << endl;
}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1; 
    //cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}