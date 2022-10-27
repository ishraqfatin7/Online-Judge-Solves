#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int arr[501][501];
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j)
                arr[i][j] = 0;
            else if (i > j)
                arr[i][j] = arr[j][i];
            else
                arr[i][j] = v[i] + v[j];
        }
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