#include <bits/stdc++.h>
using namespace std;

int poly(int n)
{
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    poly(n - 1);
    cout << " + ";
    cout << "x^" << n-1 ;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    poly(n);
}