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
const int N = 1e5 + 9;
int arr[N];
int tree[N * 3];
int getSumofDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    init(Left, b, mid);
    init(Right, mid + 1, e);
}

void update(int node, int b, int e, int l, int r)
{
    if (b > r || e < l)
        return;
    if (b == e)
    {
        tree[node] = getSumofDigits(tree[node]);
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    update(Left, b, mid, l, r);
    update(Right, mid + 1, e, l, r);
}
int query(int node, int b, int e, int x)
{
    if (b == e)
    {
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    if (x <= mid)
        return query(Left, b, mid, x);
    else
        return query(Right, mid + 1, e, x);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    rep1(i, n) cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    init(1, 1, n);
    while (q--)
    {
        int t, l, r;
        cin >> t;
        if (t == 1)
        {
            cin >> l >> r;
            update(1, 1, n, l, r);
        }
        else if (t == 2)
        {
            int x;
            cin >> x;
            cout << arr[x] << endl;
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
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}