#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int arr[11] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
    int n;cin >>n; 
    string s = to_string(n); 
    
    int ans = n - pow(10, s.size() - 1);
                
    cout <<ans<<endl;
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