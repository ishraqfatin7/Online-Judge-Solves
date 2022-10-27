#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define nl '\n'
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

void solve(int tt)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int minIndex = min_element(v.begin(), v.end()) - v.begin();
    int maxIndex = max_element(v.begin(), v.end()) - v.begin();

    if (maxIndex == 0 && minIndex == n - 1  && minIndex!=maxIndex)
    {
        sort(v.begin(), v.end());
        cout << v[n - 1] - v[1] << nl;
    }

    else
    {
        sort(all(v));
        cout << v[n - 1] - v[0] << nl;
    }
}

int main()
{
    FAST;
    // init();
    int tt;
    tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
}