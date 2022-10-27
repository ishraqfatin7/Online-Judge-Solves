#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void initAlpha()
{
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    map<char, int> mp;
    map<char, int> mp2;
    char ch = 'A';
    for (int i = 1; i <= 26; i++)
    {
        mp[ch++] = 1;
        mp2[ch++] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {

        if (!mp2[s[i]])
        {
            sum += 2;
            mp2[s[i]] = 1;
        }
        else
        {

            sum++;
        }
    }
    cout << sum << endl;
};

int main()
{

    FAST;
    initAlpha();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}