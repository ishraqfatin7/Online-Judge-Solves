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
const int N = 2e5+9; 
ll a[N]; 
map<ll,pll>mx; 
void solve()
{
    ll i, j, k, n, m;
    
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> m;
        ll sum = 0;
        for (j = 1; j <= m; j++)
            cin >> a[j], sum += a[j];
        for (j = 1; j <= m; j++)
        {
            if (mx.find(sum - a[j]) != mx.end() && mx[sum - a[j]].F != i)
            {
                cout << "YES\n";
                cout << mx[sum - a[j]].F << ' ' << mx[sum - a[j]].S << endl;
                cout << i << ' ' << j << endl;
                return ;
            }
            else
                mx[sum - a[j]] = {i, j};
        }
    }
    cout << "NO\n";
}

int main()
{
    FAST;
    int tt;
     tt = 1;
    //cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}