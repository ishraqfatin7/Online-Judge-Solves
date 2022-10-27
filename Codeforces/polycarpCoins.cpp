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
        long long  a = n / 3, b = n / 3;
        if (n % 3 == 1)
            ++a;
        else if (n % 3 == 2)
            ++b;
        cout << a << ' ' << b << '\n';
    }
}