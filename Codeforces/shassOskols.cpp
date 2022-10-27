#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        int birdsLeft = abs(1 - y);
        int birdsRight = abs(arr[x] - y);
        arr[x - 1] += birdsLeft;
        arr[x + 1] += birdsRight;
        arr[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
}