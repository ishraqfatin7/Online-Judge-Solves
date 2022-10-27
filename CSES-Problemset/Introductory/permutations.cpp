#include <bits/stdc++.h>
using namespace std;
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ll = long long;

int32_t main()
{
    Fast;
    int n;
    cin >> n;
    if (n <= 3 && n > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    else if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}