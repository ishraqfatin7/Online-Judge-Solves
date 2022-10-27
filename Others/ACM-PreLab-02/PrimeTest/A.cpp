#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

const int N = 1e6 + 9;
bool mark[N];
vector<int> primes;

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

int main()
{
    FAST;
    sieve();
    int n;
    while (cin >> n and n)
    {

        int count = 0;
        for (int i = 0; primes[i] <= n / 2; i++)
        {
            int d = n - primes[i];
            if (binary_search(primes.begin(), primes.end(), d))
            {
                count++;
            }
        }
        cout << count << endl;
    }
}