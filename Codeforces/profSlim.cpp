#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool f = is_sorted(arr, arr + n);
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
           if(arr[i-1]>arr[i]){
               int x = arr[i-1];
               
           }
        }
    }
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}