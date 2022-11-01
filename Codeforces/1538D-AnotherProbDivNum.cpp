#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
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

int countSPF(int x){
    int cnt = 0; 
    for(int i =2 ; i*i<=x;i++){
        while(x%i==0){
            x/=i;
            cnt++;
        }
    }
    if(x>1) cnt++;
    return cnt; 
}

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    int spfa = countSPF(a);
    int spfb = countSPF(b);
    if(k>spfa+spfb){
        cout << "NO" << endl;
        return;
    }
    if(k>1){
        cout << "YES" << endl;
        return; 
    }
    if (((a % b == 0) or (b % a == 0)) and (a - b))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    FAST;
    int tt;
    cin >> tt;

    //   for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}