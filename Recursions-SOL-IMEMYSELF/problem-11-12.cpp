#include <bits/stdc++.h>
using namespace std;

int secondMax(int arr[], int n, int mx, int prev)
{
    if (n == 0)
    {
        return prev;
    }
    if (arr[n - 1] > mx)
    {
        mx = arr[n - 1];
    }
    else if (arr[n - 1] > prev && arr[n - 1] < mx)
    {
        prev = arr[n - 1];
    }
    return secondMax(arr, n - 1, mx, prev);
    //prev = mx;
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    mx = secondMax(a, n, mx, 0);
    cout << mx << " ";
}