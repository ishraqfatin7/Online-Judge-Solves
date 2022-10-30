#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    deque<int> dq;
    dq.push_back(a[0]);
    rep1(i, n - 1)
    {
        if (a[i] <= dq.front())
            dq.push_front(a[i]);
        else
            dq.push_back(a[i]);
    }
    for (auto x : dq)
        cout << x << ' ';
    cout << endl;
}
int main()
{
    FAST;
    int tt;
    cin >> tt;

    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}