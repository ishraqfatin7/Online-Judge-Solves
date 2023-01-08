#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pcc = pair<char, char>;
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
const int N = 1e7 + 9;
int spf[N];
void solve()
{
    int x, y;
    int d = y - x;
    vector<int> ans;
    while (d > 1)
    {
        ans.push_back(spf[d]);
        d /= spf[d];
    }
    sort(all(ans));
    int res = 0;
    bool ok = false;
    for (auto i : ans)
    {
        if (__gcd(x + i, d) == 1)
        {   ok = true; 
            res++; 
        }
    }
    if (!ok)
    {
        cout << -1 << endl;
        return;
    }
    cout << res << endl;
}

int main()
{
    FAST;
    int tt;
    // tt = 1;
    for (int i = 2; i < N; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            spf[j] = min(spf[j], i);
        }
    }
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}