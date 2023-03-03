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
const int N = 1e6 + 9;
bool mark[N];
vector<int> primes;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{

    return a.first > b.first;
}

void sieve()
{
    // mark[2] = true;
    mark[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                mark[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!mark[i])
            primes.push_back(i);
    }
}
void solve()
{
    int n;
    while (cin >> n and n)
    {

        int count = 0;
        cout << n << ":" << endl;
        bool f = false;
        priority_queue<pair<int, pair<int, int>>> v;
        for (int i = 0; primes[i] <= n / 2; i++)
        {
            int d = n - primes[i];
            if (binary_search(primes.begin(), primes.end(), d))
            {
                f = true;
                //  cout << primes[i] << "+" << d;
                v.push(make_pair(abs(d - primes[i]), make_pair(d, primes[i])));
            }
        }
        if (!f)
            cout << "NO WAY!";
        else
        {

            cout << v.top().second.second << "+" << v.top().second.first;
        }
        cout << endl;
    }
}

int main()
{
    FAST;
    int tt;
    sieve();
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