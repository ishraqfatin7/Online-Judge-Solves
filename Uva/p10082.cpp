#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    string upperKeys = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    // string keys = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while (getline(cin, s))
    {
        // transform(s.begin(), s.end(), s.begin(), ::tolower);
        //   cin >> s;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == ' ')
            {
                cout << " ";
            }
            else
            {
                cout << upperKeys[upperKeys.find(s[i]) - 1];
            }
        }
        cout << endl;
    }
}

int main()
{
    solve();
}
