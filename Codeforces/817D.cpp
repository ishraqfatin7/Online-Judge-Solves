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

const int N = 1e5;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            ans += i;
            v.push_back((n - 1 - i) - i);
        }
        else
        {
            ans += n - 1 - i;
            v.push_back(i - (n - 1 - i));
        }
    }
    sort(all(v), greater<int>());
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1] > 0)
        {
            sum += v[i - 1];
        }
        cout << ans + sum << " ";
    }
    cout << endl;
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