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
// int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
// int dx[] = {0, 0, -1, +1};
// int dy[] = {+1, -1, 0, 0};
int dx[] = {1, -1, 1, -1, 2, 2, -2, -2};
int dy[] = {2, 2, -2, -2, 1, -1, 1, -1};

void solve()
{
    int n, s;
    cin >> n >> s;
    vi v(3000, 0);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, x);
        v[x] = 1;
    }
    int res = 0;
    int rest = mx - n;
    int cnt = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (cnt >= rest && res ==s)
        {
            cout << "YES" << endl;
            return;
        }
        if (v[i] == 0)
        {
            res += i;
            cnt++;
        }
        else if (res > s)
            break;
    }

    cout << "NO" << endl;
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //      for(int i = 1; i<=tt; i++)
    //  cin.ignore();
    while (tt--)
    {
        solve();
    }
}