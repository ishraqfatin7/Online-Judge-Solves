#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>
#define pll pair<ll, ll>
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v(2 * n + 1, 0);
    int oneCount = 0;
    int d = n - k + 1;
    k--;
    for (int i = 0; i < d; i++)
    {
        if ((s[i] + oneCount) & 1)
        {
            oneCount++;
            v[i+k] = 1;
        }
        s[i] = '0';
        oneCount -= v[i];
    }
    for (int i = d; i < n; i++)
    {
        s[i] = '0'+(s[i] + oneCount) % 2;
       
    }
    cout << s << endl;
}

int main()
{
    FAST;
    int tt;
    // tc = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}