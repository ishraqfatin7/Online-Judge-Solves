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
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s;
    string s2, s3;
    reverse(all(s1));
    int x = (n - 1) / 2;
    int y = (n + 3) / 2 - 1;
    bool f = true;
    if (s != s1)
    {
        f = false;
    }
    s2 = s.substr(0, x);
    s3 = s2;
    reverse(all(s3));
    if (s2 != s3)
    {
        f = false;
    }
    string s4, s5;
    s4 = s.substr(y);
    s5 = s4;
    reverse(all(s5));
    if (s4 != s5)
    {
        f = false;
    }
    if (f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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