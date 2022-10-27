#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{

    int n;
    cin >> n;
    int v[n] = {0};
    string s;
    cin >> s;
    int ans = 0;

   if(s[0] =='0') v[0]++;
   else v[1]++;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (s[i - 1] == '1' && v[1] % 2 == 1)
            {
                ans++;
               s[i] = '1';
                v[1] = 0;
            }
            else
                v[0]++;
        }
        else{
            if(s[i-1] =='0' && v[0]%2 ==1){
                ans++;
               s[i] ='0';
                v[0] = 0;
            }
            else v[1]++;
        }
    }

    cout << ans << endl;
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