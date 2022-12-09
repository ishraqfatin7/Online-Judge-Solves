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
    string a, s;
    cin >> a >> s;
    ll last = 0;
    vector<ll> b;
    bool f = 0;
    while (s.size())
    {
        ll last = 0;
        if (a.size())
        {
            last = a.back() - '0';
            a.pop_back();
        }
        ll last2 = s.back() - '0';
        s.pop_back();
        if (last2 < last)
        {
            if (s.size() == 0)
            {
                f = 1;
                break;
            }
            last2 += (s.back() - '0') * 10;
            s.pop_back();
        }
        if (last2 - last > 9)
        {
            f = 1;
            break;
        }
        if (last2 < last)
        {
            f = 1;
            break;
        }
        b.pb(last2 - last);
    }
    while (b.size() > 1 && b.back() == 0)
        b.pop_back();
    reverse(b.begin(), b.end());

    if (f)
        cout << "-1\n";
    else if (a.size())
        cout << "-1\n";
    else
    {
        for (auto x : b)
        {
            cout << x;
        }
        cout << '\n';
    }
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