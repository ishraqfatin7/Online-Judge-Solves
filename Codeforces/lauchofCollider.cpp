#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1e9;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            ans = min(ans, (a[i + 1] - a[i]) / 2);
        }
    }
    if (ans == 1e9)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}