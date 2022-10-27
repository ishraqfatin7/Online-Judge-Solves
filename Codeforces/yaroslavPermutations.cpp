#include <bits/stdc++.h>
using namespace std;

int arr[10000];
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[x]++;
    }

    bool f = true;
    for (int i = 0; i <= 1010; i++)
    {
        if (arr[i] && arr[i] > (n + 1) / 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}