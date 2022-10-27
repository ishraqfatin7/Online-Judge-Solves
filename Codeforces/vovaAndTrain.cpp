#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    ll des, v, l, r;
    cin >> des >> v >> l >> r;
    ll ans = des / v;
    ll rem = r / v - l / v;
    if(l%v ==0) rem+=1; 
    cout<<ans-rem<<endl;
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