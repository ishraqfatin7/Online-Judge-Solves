#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, news;
        cin >> s;
        set<char> prefix;
        int count = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    
                }
                else{
                    continue;
                }
            }
        }
        cout << count << endl;
    }
}
