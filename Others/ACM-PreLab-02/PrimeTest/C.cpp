// ’
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

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{

    return a.first > b.first;
}

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
        //  cout << n << " = ";
        bool f = false;
        int size = primes.size();
        priority_queue<pair<int, pair<int, int>>> v;
        for (int i = 0; primes[i] <= size; i++)
        {
            if (primes[i] > n - primes[i])
                break;

            if (!mark[primes[i]] && !mark[n - primes[i]])
            {
                cout << n << " = " << primes[i] << " + " << n - primes[i] << endl;
                f = true;
                break;
            };
        }
        if (!f)
            cout << "Goldbach's conjecture is wrong.";
        // else
        // {

        //     cout << v.top().second.second << " + " << v.top().second.first;
        // }
        // cout << endl;
    }
}