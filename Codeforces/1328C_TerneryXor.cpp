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
    string a, b;
    bool f = 0;
    if (s[0] == '0')
        a = "2", b = "1", f = 1;
    else if (s[0] == '1')
        a = "2", b = "2";
    else
        a = "1", b = "1";

    rep1(i,n-1)
    {
        if (f)
            a.push_back('0'), b.push_back(s[i]);
        else
        {
            if (s[i] == '2')
                a.push_back('1'), b.push_back('1');
            else if (s[i] == '0')
                a.push_back('0'), b.push_back('0');
            else
                b.push_back('0'), a.push_back('1'), f = 1;
        }
    }
    cout << a << endl
         << b << endl;
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}