#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i <= (n); i++)
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (n); i > 0; i--)
#define all_bit(x) __builtin_popcount(x)
#define nl '\n'
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

unordered_map<int, char> m;

void initAlpha()
{
    char c = 'a';
    for (int i = 1; i <= 26; i++)
    {
        m[i] = c;
        c++;
    }
}
void solve()
{
    string s;cin >>s; 
    int n = s.size();
    vector<int>v; 
    for(int i =0; i<n;i++){
        v.push_back(m[s[i]]);
    }
    int ans = 0; 
   if(s[0]<s[n-1]){
      for(char ch = s[0]; ch<=s[n-1];ch++){
          ans+=v[ch-'a'];
      }
      cout << s[n-1]-s[0] <<" "<<ans<<nl;
   }
}

int main()
{
    FAST;
    initAlpha();
    int tt;
    // tt = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}