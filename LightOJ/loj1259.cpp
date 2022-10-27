#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bool f[N];
vector<int> primes;
int n, p, q;
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

int main()
{
    sieve();
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        cin >> n;
        cout << "Case " << i << ": ";
        int count = 0;
        for (int i = 0; primes[i] <= (n / 2); i++)
        {
            p = n - primes[i];
            q = primes[i];
            if (!f[p] && !f[q])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}