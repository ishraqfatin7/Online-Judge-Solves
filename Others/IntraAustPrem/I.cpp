#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

// const int N = 1e7 + 5;
// bool mark[N];
// vector<int> primes;
// void sieve()
// {
//     // mark[2] = true;
//     mark[1] = true;
//     for (int i = 2; i * i <= N; i++)
//     {
//         if (!mark[i])
//         {
//             for (ll j = i * i; j <= N; j += i)
//             {
//                 mark[j] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= N; i++)
//     {
//         if (!mark[i])
//             primes.push_back(i);
//     }
// }

void solve()
{
    ll n;
    cin >> n;
    
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (!(n & 1))
    {
        cout << 2 << endl;
        return;
    }
    ll k = n;
    bool f = false;
    for (ll i = 3; i * i <= k; i += 2)
    {
        if (!(k %i))
        {
            f = true;
            cout << i << endl;
            return;
        }
    }
    if (!f)
        cout << -1 << endl;
}

int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}