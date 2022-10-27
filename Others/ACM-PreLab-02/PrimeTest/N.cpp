#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 1;
bool f[N];
vector<int> primes;
vector<pair<int, int>> comp[N];

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

    for (int i = 4; i <= N; i++)
    {
        if (f[i])
        {
            for (int j = i + 1; j <= N; j++)
            {
                if (f[j])
                {
                    // arr[i] += i + j;
                    if (f[i + j])
                    {
                        cout << i << " " << j << endl;
                    }
                    break;
                }
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    bool found = false; 
    for (int i = 4; i <= n; i++)
    {
        if (f[i] && !found)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (f[j])
                {
                    // arr[i] += i + j;
                    
                    if (i + j == n)
                    {
                        cout << i << " " << j << endl;
                        found = true; 
                        break;
                    }
                }
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    // alculatePairs();
    int tt = 1;

    while (tt--)
    {
        solve();
    }
    return 0;
}