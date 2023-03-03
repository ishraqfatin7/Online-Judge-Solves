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

const int N = 1e6 + 5;
int cnt[N];

void solve()
{
    int n;
    cin >> n;
    // vi v(n);

    // solution 1
    rep(i, n)
    {
        int x;
        cin >> x;
        // part of solution 1
        //  for (int j = 1; j * j <= x; j++)
        //  {
        //      if (x % j == 0)
        //      {
        //          cnt[j]++;
        //          if (x / j != j)
        //              cnt[x / j]++;
        //      }
        //  }
        // part of solution 2
        cnt[x]++;
    }
    // for (int i = N; i >= 1; i--)
    // {
    //     if (cnt[i] >= 2)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    for (int mxgcd = N; mxgcd > 0; mxgcd--)
    {

        int divs = 0;
        for (int j = mxgcd; j <= N; j += mxgcd)
        {
            divs += cnt[j];
        }
        if (divs >= 2)
        {
            cout << mxgcd << endl;
            break;
        }
    }
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