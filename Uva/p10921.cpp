
#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

map<char, int> mp;
void init()
{
    mp['A'] = 2;
    mp['B'] = 2;
    mp['C'] = 2;
    mp['D'] = 3;
    mp['E'] = 3;
    mp['F'] = 3;
    mp['G'] = 4;
    mp['H'] = 4;
    mp['I'] = 4;
    mp['J'] = 5;
    mp['K'] = 5;
    mp['L'] = 5;
    mp['M'] = 6;
    mp['N'] = 6;
    mp['O'] = 6;
    mp['P'] = 7;
    mp['Q'] = 7;
    mp['R'] = 7;
    mp['S'] = 7;
    mp['T'] = 8;
    mp['U'] = 8;
    mp['V'] = 8;
    mp['W'] = 9;
    mp['X'] = 9;
    mp['Y'] = 9;
    mp['Z'] = 9;
    mp[' '] = 9;
}
void solve(int t)
{
    init();
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-' || s[i] == '1' || s[i] == '0')
            {
                cout << s[i];
                continue;
            }
            cout << mp[s[i]];
        }
        cout << endl;
    }
}

int main()
{
    FAST;
    solve(1);
    // int tt;
    // cin >> tt;
    // cin.ignore();
    // for (int i = 1; i <= tt; i++)
    // {
    //     solve(i);
    // }
}
