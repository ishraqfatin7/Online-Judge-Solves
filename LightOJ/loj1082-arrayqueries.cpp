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
int arr[N] = {-1};
int tree[N * 3] = {-1};

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
    tree[node] = min(tree[Left], tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX; // বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
    {
        return tree[node]; // রিলেভেন্ট সেগমেন্ট
    }

    int Left = node * 2; // আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j);

    int p2 = query(Right, mid + 1, e, i, j);

    return min(p1, p2);
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return; // বাইরে চলে গিয়েছে
    if (b >= i && e <= i)
    { // রিলেভেন্ট সেগমেন্ট
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2; // আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = min(tree[Left], tree[Right]);
}

void traverse(int node, int b, int e)
{
    if (b == e)
    {
        cout << tree[node] << " ";
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    traverse(Left, b, mid);
    traverse(Right, mid + 1, e);
}
void solve(int t)
{
    int n, q;
    cin >> n >> q;
    rep1(i, n)
    {
        cin >> arr[i];
    }
    init(1, 1, n);
    // segment tree traverse
    // traverse(1, 1, n);
    cout << "Case " << t << ": " << endl;
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        cout << query(1, 1, n, i, j) << endl;
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
    for (int i = 1; i <= tt; i++)
    // while (tt--)
    {
        solve(i);
    }
}