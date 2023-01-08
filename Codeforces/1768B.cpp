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

void solve()
{

    //     You are given a permutation† p of length n and a positive integer k≤n.

    // In one operation, you:

    // Choose k distinct elements pi1,pi2,…,pik.
    // Remove them and then add them sorted in increasing order to the end of the permutation.
    // For example, if p=[2,5,1,3,4] and k=2 and you choose 5 and 3 as the elements for the operation, then [2,5,1,3,4]→[2,1,4,3,5].

    // Find the minimum number of operations needed to sort the permutation in increasing order. It can be proven that it is always possible to do so.
    // if n = 4 (2,3,1,4) , k = 2; then ans is 2
    int n, k;
    cin >> n >> k;
    vi v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    ll curr = 1;
    rep(i, n)
    {
        if (v[i] == curr)
        {
            curr++;
            cnt++;
        }
    }
    ll ans = n - cnt;
    if (ans % k)
    {
        ans = ans / k + 1;
    }
    else
    {
        ans = ans / k;
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