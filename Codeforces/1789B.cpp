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
    string s;
    cin >> s;
    string k = s;
    reverse(all(k));
    if (k == s)
    {
        cout << "YES" << endl;
        return;
    }
    vi ans;
    for (int i = 0, j = n - 1; i < n and j >= 0; i++, j--)
    {
        if (i < j)
        {
            if (s[i] != s[j])
            {
                ans.pb(i);
            }
        }
    }
    bool f = true;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i + 1] - ans[i] > 1)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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