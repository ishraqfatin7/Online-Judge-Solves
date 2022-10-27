#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int x, y;
        cin >> x >> y;
        int n = max(x, y);
        int count = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (!(x & i))
            {
                // divs.push_back(i);
                count++;
                if (i != n / i)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}