#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
typedef pair<int, int> pii;

void solve()
{
  
    int n;
    cin >> n;
    cin.ignore();  
    map<string, int> mp;
   
    for (int i = 0; i < n; i++)
    {
        string s;
        
        getline(cin, s);

        mp[s]++;
    }
   
   
    for (auto x : mp)
    {
        cout << x.first  << x.second << "\n";
    }
    cout << endl;
}
int main()
{

    FAST;

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        solve();
    }
}