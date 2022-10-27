#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(int t)
{
    ll arr[2];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 2);
    ll a = arr[0];
    ll b = arr[1];
    ll c = arr[2];
    cout << "Case " << t << ": ";
    if (arr[0] + arr[1] > arr[2])
    {
        if (a == b && b == c)
            cout << "Equilateral"
                 << "\n";
        else if (a == b || b == c || c == a)
            cout << "Isosceles"
                 << "\n";
        else
            cout << "Scalene"
                 << "\n";
    }
    else if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Invalid"
             << "\n";
    }
    else
    {
        cout << "Invalid"
             << "\n";
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}