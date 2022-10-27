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
    int m, n, p;
    cin >> m >> n >> p;
    int arr[m + 2][n + 2];
    vi v;
    for (int i = 1; i <= m; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            if (i == p)
            {
                v.pb(arr[i][j]);
            }
        }
    }
    int ans = 0;
    vi v2;
    for (int i = 1; i <= n; i++)
    {
        int mx = -1;
        for (int j = 1; j <= m; j++)
        {
            mx = max(mx, arr[j][i]);
        }
        v2.pb(mx);
        // cout <<endl;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]<v2[i]){
            ans+=v2[i]-v[i];
        }
    }
    cout <<"Case #"<<t<<": "<<ans<<endl;
    //cout << ans << endl;
}
int main()
{
    FAST;
    int tt;
    // tt = 1;
    cin >> tt;
    for(int i = 1; i<=tt; i++)
   // while (tt--)
    {
        solve(i);
    }
}