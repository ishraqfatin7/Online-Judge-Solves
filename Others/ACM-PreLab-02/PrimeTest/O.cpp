#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int isPrime(ll n)
{

    if (n == 2)
    {
        return 1;
    }
    if (n < 2)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans;
    for (ll i = 0; i < n; i++)
    {
        ans = sqrt(arr[i]);
        if (ans * ans == arr[i] && isPrime((ans)) == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}