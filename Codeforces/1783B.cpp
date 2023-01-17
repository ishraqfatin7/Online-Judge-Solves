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
#define rrep1(i, n) for (int i = 1; i < n; i += 2)
#define all_bit(x) __builtin_popcount(x)
#define CLEAR(a, x) memset(a, x, sizeof(a));
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void print(vector<vector<int>> &ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "1 4\n3 2" << endl;
        return;
    }
    vi arr(n * n);
    int start = 0, end = n * n - 1;
    iota(all(arr), 1);
    vector<vi> res;
    bool f = true;
    rep(i, n)
    {
        vector<int> curr;
        rep(j, n)
        {
            if (f)
            {
                f = false;
                curr.pb(arr[start]);
                start++;
            }
            else
            {
                f = true;
                curr.pb(arr[end]);
                end--;
            }
        }
        res.pb(curr);
    }
    if (!(n & 1))
    {
        rrep1(i, n)
        {
            reverse(all(res[i]));
        }
    };

    print(res, n);
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}
