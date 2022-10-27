#include <bits/stdc++.h>
using namespace std;

int main()
{
    // s = r * theta;
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int n, m;
        cin >> n >> m;
        cout << "Case " << i << ": ";
        cout << (n / 2) * m << endl;
    }
}