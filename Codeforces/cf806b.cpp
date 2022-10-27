#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cin >> s;
        for (int j = 0; j < x; j++)
        {
            if (s[j] == 'D')
            {
                arr[i]++;
            }
            else if (s[j] == 'U')
            {
                arr[i]--;
            }
        }
        if (arr[i] > 9)
        {
            arr[i] %= 10;
        }
        else if (arr[i] < 0)
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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