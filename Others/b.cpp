#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
//const int n = 1e7 + 9;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }
    // sort(arr,arr+n);

    int found = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] && arr[i] > 2)
        {
            found = 1;
            cout << arr[i] << endl;
            cout << i << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "-1"<<endl;
            return;
    }
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}