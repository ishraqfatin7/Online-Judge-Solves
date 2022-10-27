#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>
#define pll pair<ll, ll>
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
    ll n, m;
    cin >> n >> m;

    if (m & 1)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i+=2)
        {
            cout << i << ' ' << i + 1 << endl; // {
            //     cout << i << " ";
            //     if (!(i & 1))
            //         cout << endl;
            // }
        }
        
        
    }
    else {
        for(int i =2; i<=n;i+=2){
            if((i+m)%4!=0 && i%4!=0){
                cout <<"NO"<<endl;
                return; 
            }
        }
        cout << "YES" << endl;
        for (int i = 1; i <= n; i+=2)
        {
            if((i+1)%4==0){
                cout <<i <<" "<<i+1<<endl;
            }
            else cout <<i+1<<" "<<i<<endl;
        }
    }

    
    //     for (int i = 1; i <= n; i++)
    //      {
    //              cout << i << " " ;
    //              if(!(i&1)) cout <<endl;
    //     }
    // }
    // else{
    //    
    //     for(int i = 0; i<n/2;i++){

    //     }
    // }

    // else
    // {
    //     cout << "YES" << endl;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << i << " " ;
    //         if(!(i&1)) cout <<endl;
    //     }
    // }
}

int main()
{
    FAST;
    int tt;
    // tc = 1;
    cin >> tt;
    // for(int i = 1; i<=tt; i++)
    while (tt--)
    {
        solve();
    }
}