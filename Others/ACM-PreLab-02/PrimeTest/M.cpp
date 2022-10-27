#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 1;
bool f[N];
// vector<int> primes;
//int arr[N];
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
        arr[i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        if (!f[i])
        {
            for (int j = i + 1; j <= N; j++)
            {
                if (!f[j])
                {
                    arr[i] += i + j;
                    break;
                }
            }
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!f[arr[i]] && arr[i] <= n)
        {
            count++;
        }
    }
    if (count >= k)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    calculatePairs();
    int tt =1;
   
    while (tt--)
    {
        solve();
    }
    return 0;
}