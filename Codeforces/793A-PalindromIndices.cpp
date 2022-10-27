#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ch = s[n / 2];
    int count = 0;
    int count1 = 0;

    for (int i = (n + 1) / 2; i < s.length(); i++)
    {
        if (s[i] != ch)
        {
            // count++;
            break;
        }
        count += 2;
    }

    cout << (count += n % 2) << endl;
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}