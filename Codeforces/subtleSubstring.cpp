#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    string s;
    cin >> s;
    map<char, int> alpha;
    int i = 1;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        alpha[ch] = i;
        i++;
    }
    int alice = 0;
    int alice2 = 0;
    int bob = 0;
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        alice += alpha[s[i]];
    }
    if (size % 2 == 0)
    {
        cout << "Alice"
             << " " << alice << endl;
    }
    else
    {
        if (s[size - 1] >= s[0])
        {

            bob = s[0] - 'a' + 1;
           
        }
        else
        {
            bob = s[size - 1] - 'a' + 1;
        }
        alice -= bob;
        if (alice > bob)
        {
            cout << "Alice"
                 << " " << alice - bob << endl;
        }
        else
            cout << "Bob"
                 << " " << bob - alice << endl;
    }
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