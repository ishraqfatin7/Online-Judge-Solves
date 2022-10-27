#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkDigit(ll num, ll k)
{
    int arr[10] = {0};
    while (num)
    {
        arr[num % 10] = true;
        num /= 10;
    }
    for (int i = 0; i <= k; i++)
    {
        if (!arr[i])
            return false;
    }
    return true;
}

int32_t main()
{
    int n, k;
    cin >> n >> k;
    ll arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkDigit(arr[i], k))
        {
            count++;
        }
    }
    cout << count << endl;
}