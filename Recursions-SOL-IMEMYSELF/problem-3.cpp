#include <bits/stdc++.h>
using namespace std;

int arr[100];

void removeOdd(int i, int j, int *n)
{

    if (i == *n)
    {
        *n = j;
        return;
    }
     
    if (arr[i] % 2 == 0)
    {
        arr[j++] = arr[i];
    }
   removeOdd(i + 1, j, n);
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    removeOdd(0, 0, &n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}