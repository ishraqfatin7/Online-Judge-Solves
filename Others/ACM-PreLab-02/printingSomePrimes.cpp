#include <bits/stdc++.h>
using namespace std;

const int N = 1e8 + 1;
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
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
            primes.push_back(i);
    }
    for (int i = 1; i <= primes.size(); i += 100)
    {
        cout << primes[i - 1] << "\n";
    }
    return 0;
}