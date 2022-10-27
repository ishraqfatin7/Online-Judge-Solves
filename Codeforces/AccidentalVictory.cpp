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



void solve()
{
    int n;
    cin >> n;
    vi v(n);
    vi v2(n);
    rep(i, n)
    {
        cin >> v[i];
        v2[i] = v[i];
    }
    sort(all(v));
    int lo = 0, hi = n - 1;
    while(hi-lo>1){
        int mid = (lo+hi)/2;
        bool f = true; 
        ll sum =0; 
        for(int i = 0; i<=mid;i++){
            sum+=v[i];

        }
        for(int i = mid+1; i<n;i++){
            if(v[i]<=sum){
                sum+=v[i];
            }
            else f = false; 
        }
        if(f) hi = mid; 
        else lo = mid;

    }
    vi ans; 
    for(int i = 0; i<n;i++){
        if(v2[i]>=v[hi]){
            ans.pb(i+1);  
        }
    }
    cout <<ans.size() <<"\n"; 
    for(auto x:ans){
        cout << x << ' '; 
    }
    cout <<endl;

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