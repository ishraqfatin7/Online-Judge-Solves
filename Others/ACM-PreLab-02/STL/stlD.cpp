#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    int tt;
    cin >> tt;
    string s;
    int j = 1;
    while (tt--)
    {

        map<string, int> mp;
        int count = 0;
        if (j == 1)
        {
            cin.ignore();
            cin.ignore();
            j++;
        }

        while (getline(cin, s) and s != "")
        {

            mp[s]++;
            count++;
        }
        cout << fixed << setprecision(4);
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << (it->second * 100.0) / count << endl;
            //  printf("%s %.4f\n", it->first, it->second * 100 / count);
        }
        if (tt)
            cout << endl;
    }
}

int main()
{
    solve();
}