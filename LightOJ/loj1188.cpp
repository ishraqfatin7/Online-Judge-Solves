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
const int MX = 1e5 + 9;
int arr[MX] = {-1};
int tree[MX * 3];

// void init(int node, int start, int end)
// {
//     if (start == end)
//     {
//         tree[node] = arr[start];
//         return;
//     }
//     int left = 2 * node;
//     int right = 2 * node + 1;
//     int mid = (start + end) / 2;
//     init(left, start, mid);
//     init(right, mid + 1, end);
//     tree[node] = tree[left] + tree[right];
// }

// int query(int node, int start, int end, int i, int j)
// {
//     if (i > end || j < start)
//     {
//         return 0;
//     }
//     if (start >= i and end <= j)
//     {
//         return tree[node];
//     }
//     int left = 2 * node;
//     int right = 2 * node + 1;
//     int mid = (left + right) / 2;
//     // segment sum
//     int p1 = query(left, start, mid, i, j);
//     int p2 = query(right, mid + 1, mid + 1, i, j);
//     return p1 + p2;
// }

// void update(int node, int start, int end, int i, int newvalue)
// {
//     if (i > end || i < start)
//     {
//         return;
//     }
//     if (start >= i and end <= i)
//     {
//         tree[node] = newvalue;
//         return;
//     }
//     int left = 2 * node;
//     int right = 2 * node + 1;
//     int mid = (left + right) / 2;
//     update(left, start, mid, i, newvalue);
//     update(right, mid + 1, end, i, newvalue);
//     tree[node] = tree[left] + tree[right];
// }
// number of distinct values from i to j
int cnt[MX];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = cnt[arr[b]];

        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    init(Left, b, mid);
    init(Right, mid + 1, e);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; // বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; // রিলেভেন্ট সেগমেন্ট
    int Left = node * 2;   // আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) >> 1;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2; // বাম এবং ডান পাশের যোগফল
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
    tree[node] = tree[Left] + tree[Right];
}

void solve()
{
    int n, q;
    cin >> n >> q;
    set<int> s;
    rep1(i, n)
    {
        cin >> arr[i];
        s.insert(arr[i]);
        cnt[arr[i]] = s.size();
    }
    init(1, 1, n);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
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