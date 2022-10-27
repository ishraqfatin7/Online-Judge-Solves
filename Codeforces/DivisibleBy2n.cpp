#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
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
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int t = 0;
    rep1(i, n)
    {
        int x;
        cin >> x;
        // counting power of two
        while (x % 2 == 0)
        {
            t++;
            x /= 2;
        }
        x = i;
        // counting if the indexes are the power of two
        while (x % 2 == 0)
        {
            v[i]++;
            x /= 2;
        }
    }
    // sorting greater to find the min operations
    sort(all(v), greater<int>());
    int ans = 0;
    for (auto x : v)
    {

        if (t >= n)
        {
            break;
        }
        ans++;
        t += x;
    }
    if (t < n)
        ans = -1;
    cout << ans << "\n";
}

int main()
{
    FAST;

    int tt;
    tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve();
    }
    return 0;
}