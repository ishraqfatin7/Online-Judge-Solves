#include <bits/stdc++.h>
using namespace std;

int main()
{ //ans will be one or two, now implement it.
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        set<char> isSame;
        for (auto i : s)
        {
            isSame.insert(i);
        }
        if (isSame.size() == 1)
        {
            cout << "1"<<endl;
            return 0;
        }
        if (k == 0)
        {
            cout << "1"<<endl;
            return 0;
        }

        int i = 0;
        int length = s.length() - 1;
        int res = 0;
        while (length > i)
        {
            if (s[i] == s[length])
            {
                res = 1;
            }
            else
            {
                res = 0;
                break;
            }
            --length;
            ++i;
        }
        if (res)
        {
            cout <<"1"<<endl;
        }
        else
        {
            cout <<"2"<<endl;
        }
    }
}