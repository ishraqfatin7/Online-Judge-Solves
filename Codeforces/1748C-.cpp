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
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve()
{
    int n;
    cin >> n;
    vll v(n + 1), pref(n + 1, 0);
    rep1(i, n)
    {
        cin >> v[i];
        pref[i] = pref[i - 1] + v[i];
    }
    unordered_map<ll, int> freq;
    int mx = 0, ans = 0;
    for (int i = n; i > 0; i--)
    {
        freq[pref[i]]++;
        mx = max(mx, freq[pref[i]]);
        if (v[i]==0)
        {
            ans += mx;
            mx = 0;
            freq.clear();
        }
    }
    ans += freq[0];
    cout << ans << endl;
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