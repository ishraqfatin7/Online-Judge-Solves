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
const int N = 7 ;
const int MOD = 1e9 + 7;
int dp[N];

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    dp[0] = x;
    dp[1] = y;
    dp[2] = y - x;
    dp[3] = -x;
    dp[4] = -y;
    dp[5] = x - y;
    n--; 
    n %= 6;
    if (dp[n] < 0)
        dp[n] += MOD;
    cout << dp[n] << endl;


}

int main()
{
    FAST;
    int tt;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    tt = 1;

    // cin >> tt;

    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}