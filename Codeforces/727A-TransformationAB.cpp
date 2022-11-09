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
#define endl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
bool f = false;
vi v;
void dfs(int a, int b)
{
    if (a == b)
    {
        f = true;
        return;
    }
    if (b < a)
    {
        return;
    }
    if (b % 2 == 0)
    {
        dfs(a, b / 2);
        v.pb(b / 2);
    }
    if (b % 10 == 1)
    {
       
        dfs(a, (b-1)/10);
        v.pb((b-1)/10);
    }
}
void solve()
{
    int a, b;
    cin >> a >> b;
    dfs(a, b);
    if (f)
    {
        cout << "YES" << endl;
        cout << v.size()+1 << endl;
       // cout << a << " ";
        for (auto x : v)
        {
            cout << x << " ";
        }
       cout << b << endl;
    }

    else
        cout << "NO" << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //    for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}