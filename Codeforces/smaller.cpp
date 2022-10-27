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
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

unordered_map<char, int> m;
void initAlpha()
{

    char c = 'a';
    for (int i = 1; i <=26; i++)
    {
        m[c++] = i;
    }
}
void solve()
{   initAlpha();
    int q; 
    cin >> q;
    int sx = 1;
    int tx = 1; 
    while(q--){
        int x, k; 
        string s; 
        cin >> x >> k >> s;
        int n = s.size();
        int cnt = 0; 
        for(int i = 0; i<n;i++){
            cnt+=m[s[i]];
        }
        if(x ==1){
            sx+=cnt; 
        }
        else if(x ==2){
            tx+=cnt;
        }
        if(sx<tx){
            cout << "YES" << endl;
            cout << sx <<" "<<tx<<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main()
{
    FAST;
    int tt;
    tt = 1;
    cin >> tt;
    //  for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}