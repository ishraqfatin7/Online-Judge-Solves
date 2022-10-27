#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int size = s.length();
    bool C = false;
    string caps;
    if (s[0] < 97)
    {
        for (int i = 1; i < size; i++)
        {
            if (s[i] >= 97)
            {
                C = true;
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i < size; i++)
        {
            if (s[i] >= 97)
            {
                C = true;
                break;
            }
        }
    }
    if (!C)
    {
        for (int i = 0; i < size; i++)
        {
            if (s[i] >= 97)
            {
                s[i] -= 32;
            }
            else
            {
                s[i] += 32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
