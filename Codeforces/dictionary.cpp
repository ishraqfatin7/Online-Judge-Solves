#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()

{
    char arr[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    map<char, int> alpha;
    for (int i = 0; i < 26; i++)
    {
        alpha.insert(pair<char, int>(arr[i], i));
    }
    string s;
    cin >> s;
    int ans = 1;
    ans =alpha[s[0]]*25;
    ans+=alpha[s[1]];
    if(s[0]>s[1])ans++;
    
    cout<<ans<<endl;
    
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