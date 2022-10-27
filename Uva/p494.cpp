#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

bool isChar(char c)
{
    return (c >= 'a' && c <= 'z');
}
void solve()
{
    string s;
    while (getline(cin, s))
    {
        int count = 0;
        int size = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        // s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string newS = "";
        vector<string> words;
        int f = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                f = 1;
            }

            else
            {
                count += f;
                f = 0;
            }
        }
        count += f;
        cout << count << endl;
    }
}

int main()
{
    solve();
}
