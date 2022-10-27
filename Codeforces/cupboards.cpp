#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x)
            l++;
        if (y)
            r++;
    }
    int ans, ans1;
    ans = min(l, n - l);
    ans1 = min(r, n - r);
    cout << ans + ans1 << endl;
}