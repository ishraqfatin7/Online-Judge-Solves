// ’
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1e7 + 5;
bool mark[N];
vector<int> primes;
map<char, int> mp;

void sieve()
{
    // mark[2] = true;
    // mark[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += (i<<1))
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

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll result = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % k != 0)
                {
                    result += i;
                }
                if (i != ((n / i)) && (n / i) % k != 0)
                    result += (n / i);
            }
        }
        cout << result << endl;
    }
}