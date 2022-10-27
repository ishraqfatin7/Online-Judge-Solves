#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
const int N = 500 + 9;
int n, m;
int arr[N][N];

void binarySearchGe(int lo, int hi)
{
}

void solve(int l, int u)
{
    int sqr = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = lower_bound(arr[i], arr[i] + m, l) - arr[i];
        for (int j = sqr; j < n; j++)
        {
            if (i + j >= n || mn + j >= m || arr[i + j][mn + j] > u)
                break;
            if (j + 1 > sqr)
                sqr = j + 1;
        }
    }
    cout << sqr << endl;
}

int main()
{
    while (cin >> n >> m and n and m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, u;
            cin >> l >> u;
            solve(l, u);
        }
        cout <<'-'<<endl;
    }
}