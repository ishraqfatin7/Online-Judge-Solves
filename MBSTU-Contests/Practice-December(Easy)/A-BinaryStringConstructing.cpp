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
    int a, b, x;
    cin >> a >> b >> x;
    int n = a + b;
    char prev = '0';
    string ans = "0";
    rep(i, x)
    {
        if (prev == '0')
        {
            ans.pb('1');
            prev = '1';
            a--;
        }
        else
        {
            ans.pb('0');
            prev = '0';
            b--;
        }
    }
    if (prev == '0')
    {
        while (a--)
        {
            ans.pb('0');
            a--;
        }
        while (b--)
        {
            ans.pb('1');
            b--;
        }
    }
    else
    {
        while (b--)
        {
            ans.pb('1');
            b--;
        }
        while (a--)
        {
            ans.pb('0');
            a--;
        }
    }
    cout << ans << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}