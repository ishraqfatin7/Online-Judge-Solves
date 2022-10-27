#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;
        if (n == 2)
        {
            cout << 1 << " " << 0 << endl;
            continue;
        }
        long long m = 2;
        int i = 1;
        while (m <= n)
        {
            m *= 2;
            i++;
        }
        if ((n & n - 1) == 0)
        {
            m /= 2;
            m /= 2;

            for (int i = n - 1; i >= m; i--)
            {
                cout << i << " ";
            }
            cout << 0 << " ";
        }
        int j = m - 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
    }
}