#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 1;
bool f[N];
// vector<int> primes;
int arr[N];

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
    // for (int i = 2; i <= N; i++)
    // {
    //     if (!f[i])
    //         primes.push_back(i);
    // }
}

void calculatePairs()
{

    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
        {
            for (int j = 2; j <= N; j++)
            {
                if (!f[j])
                {
                    if (i + 2 * j > N)
                        break;

                    else
                        arr[i + 2 * j]++;
                }
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << arr[n] << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    calculatePairs();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}