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

bool check(int x, vi vis)
{
    if (x == 0)
    {
        if (vis[x] == 0)
            return true;
        return false;
    }
    while (x)
    {
        if (vis[x % 10] == 1)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    queue<char> q;
    rrep(i, s.size())
    {
        q.push(s[i]);
    }
    while (!q.empty())
    {
        char x = q.front();
        q.pop();
        if (x == 'B' && q.front()!='B')
        {
            q.pop();
            continue;
        }
        else if (q.si)
        cout << x;
    }
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