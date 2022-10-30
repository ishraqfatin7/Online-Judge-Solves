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
const int N = 1e6 + 9;
bool f[N];
int nod[N];
int sod[N];

vector<vector<int>> divs(N, vector<int>());
void sieve()
{
    f[1] = true;
    for (int i = 4; i <= N; i += 2)
    {
        f[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= N; j += 2 * i)
            {
                f[j] = true;
            }
        }
    }
}

void sodNodiv()
{
    int cnt = 0;

    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            nod[j]++;
            sod[j] += i;
            divs[j].pb(i);
            cnt++;
        }
    }

    cout << cnt << endl;
}

void solve()
{
    // sieve();
    sodNodiv();
}

int main()
{
    FAST;
    int tt;

    tt = 1;
    // cin >> tt;
    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}