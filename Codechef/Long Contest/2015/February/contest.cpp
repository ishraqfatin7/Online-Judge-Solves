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
const int N = 1e5 + 5;
bool f[N];
vector<int> primes;
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
    primes.pb(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (!f[i])
        {
            primes.pb(i);
        }
    }
}

unordered_map<int, int> primeFactorize(ll n)
{
    // using sieve
    unordered_map<int, int> ans;
    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 0;
            while (n % primes[i] == 0)
            {
                cnt++;
                n /= primes[i];
            }
            ans[primes[i]] = cnt;
        }
    }
    if (n > 1)
    {
        ans[n] = 1;
    }
    return ans;
}

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    int n;
    cin >> n;

    for (int A = 1; A * A * A <= n; A++)
    {
        if (n % A == 0)
        {   int upto = n / A;
            for (int B = A + 1; B * B <= upto; B++)
            {
                if ((n / A) % B == 0)
                {
                    int C = n / (A * B);

                    if (n % (A * B * C) == 0)
                    {
                        if (A != B && A != C && B != C)
                        {
                            cout << A << " " << B << " " << C << endl;
                            return ;
                        }
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}

int main()
{
    FAST;
    int tt;
    // sieve();
    //  tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}