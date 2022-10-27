#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        string s;
        cin >> n >> s;
        int count = 0;
        //int pos = 0;
        //stack<char> ob;
        int i = 0;
        //stack<char> eb;
        for (i = 0; i < n-1;)
        {
            if (s[i] == s[i + 1])
            {
                count++;
                i += 2;
                continue;
            }
            else if (s[i] == '(' && s[i + 1] == ')')
            {
                count++;
                i += 2;
                continue;
            }
            int curr = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ')')
                {
                    count++;
                    curr = j+1;
                    break;
                }
            }
            if (!curr)
            {   
               i=n;
            }
           i = curr;
        }
        int ans = 0;
        if (i < n)
        {
           ans = n-i;
        }
        cout << count << " " << ans << endl;
    }
}
