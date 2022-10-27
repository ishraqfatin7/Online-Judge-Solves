#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k * k <= n)
        {
            if ((n + k) % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            
        }
         else
                cout << "NO" << endl;
    }
}