#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int tt)
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
            cout << arr[x - 1] << endl;
        else
            cout << arr[x - 1] - arr[x - y - 1] << endl;
    }
}

int main()
{
    int tt = 1;
    solve(tt);
}
