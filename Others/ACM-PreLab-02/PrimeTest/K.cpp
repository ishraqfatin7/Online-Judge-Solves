#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 1;
bool f[N];
vector<int> primes;
int cnt = 0;
void sieve()
{
    f[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!f[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                f[j] = true;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
            primes.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!f[i])
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}