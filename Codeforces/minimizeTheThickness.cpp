
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
    int arr[n + 1];
    rep(i, n) cin >> arr[i];
    int ans = n;
    for (int j = 0; j < n; j++)
    {
        ll sum = 0;
        for (int k = 0; k <= j; k++)
            sum += arr[k];

        int diff = j + 1;
        int currlen = 0;
        ll currentSum = 0;
        for (int i = j + 1; i < n; i++)
        {
            currentSum += arr[i];
            currlen++;
            if (currentSum == sum)
            {
                diff = max(diff, currlen);
                currentSum = 0;
                currlen = 0;
            }
        }
        if (currentSum == 0)
            ans = min(ans, diff);
    }
    cout << ans << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}