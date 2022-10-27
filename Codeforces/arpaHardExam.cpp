#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << 8 << endl;
    }
   else if (n % 4 == 2)
    {
        cout << 4 << endl;
    }
    else if (n % 4 == 3)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 6 << endl;
    }

}
