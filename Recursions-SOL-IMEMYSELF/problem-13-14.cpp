#include <bits/stdc++.h>
using namespace std;

int linearItr = 0, binaryItr = 0;

void search(int arr[], int n, int x, int i)
{   linearItr++;
    if (i == n)
    {
        cout << "Not Found" << endl;
        return;
    }
    if (arr[i] == x)
    {
        cout << "Found" << endl;
        return;
    }
    search(arr, n, x, i + 1);
}

void binarySearch(int arr[], int n, int x, int lo, int hi)
{   binaryItr++;
    if (lo > hi)
    {
        cout << "Not Found" << endl;
        return;
    }
    int mid = (lo + hi) / 2;
    if (arr[mid] == x)
    {
        cout << "Found" << endl;
        return;
    }
    else if (arr[mid] > x)
    {
        binarySearch(arr, n, x, lo, mid - 1);
    }
    else binarySearch(arr, n, x, mid + 1, hi);
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
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        search(a, n, x, 0);
        cout << "Linear Iterations: " << linearItr << endl;
        linearItr = 0; 
    }
    sort(a, a + n);
    cout << "Binary Searching..." << endl;
    binarySearch(a, n, 5, 0, n - 1);
    cout << "Binary Iterations: " << binaryItr << endl;
    binaryItr = 0; 
    binarySearch(a, n, 9, 0, n - 1);
    cout << "Binary Iterations: " << binaryItr << endl;
}