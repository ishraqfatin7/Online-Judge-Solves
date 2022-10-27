#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << arr2[0] - arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        int dis = max(arr[i], arr2[i - 1]);
        cout << arr2[i] - dis << " ";
    }
    cout << endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}