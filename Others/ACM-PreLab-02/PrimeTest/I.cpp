#include <bits/stdc++.h>
using namespace std;

const int N = 1e8 + 1;
bool f[N];
vector<int> primes;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
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
    for (int i = 1; i <= primes.size(); i += 100)
    {
        cout << primes[i - 1] << "\n";
    }
    return 0;
}