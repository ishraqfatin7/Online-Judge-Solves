#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        double x = arr[i];
        double sum = 0;
        double same = 0;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                count++;
                sum += arr[j];
            }
        }
        if (sum / count == x)
        {
            f = true;
            break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
};

int main()
{

    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}