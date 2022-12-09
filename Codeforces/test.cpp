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
// int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
// int dx[] = {0, 0, -1, +1};
// int dy[] = {+1, -1, 0, 0};
int dx[] = {1, -1, 1, -1, 2, 2, -2, -2};
int dy[] = {2, 2, -2, -2, 1, -1, 1, -1};
const int N = 2001;
vi adj[N];
bool vis[N];
int cost[N];
bool f = true;
int l, r, x;

const int mod = 100;

int bfs(int x, int y)
{

    vector<int> cost(N, -1);
    queue<int> q;

    q.push(x);
    cost[x] = 0;

    while (!q.empty())
    {
        x = q.front();
        q.pop();

        if (x == y)
            return cost[x];

        if (2 * x < N && cost[2 * x] == -1)
        {
            cost[2 * x] = 1 + cost[x];
            q.push(2 * x);
        }
        if (x + 3 < N && cost[x + 3] == -1)
        {
            cost[x + 3] = 1 + cost[x];
            q.push(x + 3);
        }

        if (x - 1 >= 0 && cost[x - 1] == -1)
        {
            cost[x - 1] = 1 + cost[x];
            q.push(x - 1);
        }
    }
    return cost[x];
}
void solve()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    long double x = b / 1000000000000;
    long double y = d / 1000000000000;
    if (pow(a, x) > pow(c, y))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    FAST;
    int tt;
    tt = 1;
    // cin >> tt;
    //      for(int i = 1; i<=tt; i++)
    //  cin.ignore();
    while (tt--)
    {
        solve();
    }
}