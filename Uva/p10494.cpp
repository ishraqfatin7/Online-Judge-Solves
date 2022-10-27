#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

unsigned long long int x, y;

int main()
{

    FAST;
    char ch;
    while (cin >> x >> ch >> y)
    {
        if (ch == '/')
        {
            cout << x / y << endl;
        }
        else if (ch == '%')
        {
            cout << x % y << endl;
        }
    }
}