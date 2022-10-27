#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, k;
    cin >> n >> k;
    priority_queue<ll> pq;
    //pq works faster than multiset
    multiset<ll>s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll cnt = 0;
    while (k--)
    {
        auto last =  s.end();
        last--;
        cnt+=*last; 
        s.erase(last); 
        s.insert(*last/2);
    }   
    cout << cnt << endl;
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