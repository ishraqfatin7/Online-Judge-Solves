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
const int N = 2009;
bool vis[N][N];

//math solution 

struct Rect {

    int x1, y1, x2, y2;
    int area(){
        return (x2 - x1) * (y2 - y1);
    }
};

int intersect(Rect a, Rect b){
    int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return x * y;
}


void solve()
{ // implementation solution
    rep(i, 3)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;
        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
            {
                vis[x][y] = (i < 2);
            }
        }
    }
    int cnt = 0;
    rep(i, N)
    {
        rep(j, N)
        {
            if (vis[i][j])
                cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    FAST;
    int tt;
    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);
    tt = 1;
    // cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}