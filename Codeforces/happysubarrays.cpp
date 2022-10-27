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

void solve(int t)
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    int sum = 0;
    int best = 0;
    int ans = 0;
    rep(i, n)
    {
        sum = max(v[i], sum + v[i]);
        best = max(best, sum);
        // cout << sum <<" ";
    }

    int totalSum = 0;
    reverse(all(v)); 
    //       For ith index the number of occurrences are = (n-i)*(i+1)
    //        Contribution of each element in totalSum is arrA[i]*(n-i)*(i+1)
    for (int i = 0; i < n; i++)
    {
        totalSum += v[i] * (n - i) * (i + 1);
        }

    cout << totalSum << endl;
}
int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
}