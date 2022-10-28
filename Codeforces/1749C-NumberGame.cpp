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
bool calc(deque<int> dq, int k)
{
    for (int i = k; i > 0; i--)
    {
        while (!dq.empty() && dq.back() > i)
        {
            dq.pop_back();
        }
        if (dq.empty())
        {
            return false;
        }
        dq.pop_back();
        while (!dq.empty() && dq.back() >= i)
        {
            dq.pop_back();
        }
        if (dq.size())
            dq.pop_front();
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];
    sort(all(dq));
    int ans = 0;
    int i = 1;
    while (i)
    {
        if (!calc(dq, i))
        {
            ans = i - 1;
            break;
        }
        i++;
    }
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