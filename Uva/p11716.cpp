#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
    string s;
    getline(cin, s);
    // cout << s << endl;

    ll size = s.size();
    ll sq = sqrt(size);
    if (sq * sq != size)
    {
        cout << "INVALID" << endl;
    }
    else
    {
        for (int i = 0; i < sq; i++)
        {
            //  cout << s[i];
            for (int j = i; j < size; j += sq)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    int tt;
    cin >> tt;
    cin.ignore(256, '\n');
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}
