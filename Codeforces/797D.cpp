#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;
void solve()
{
    int n,k;
    cin >> n >> k;
    string s; cin >> s;
    vector<int>v; 
    int count = 1;
    for(int i =0;i<n;i++){
        
        if(s[i] == 'W'){
            v.push_back(count);
            count = 0;
        }
        else count++;
    }
    int cnt =1;
    for(int i =n-1;i>=0;i--){
        cnt++;
        if(s[i] == 'W'){
            v.push_back(cnt);
            cnt = 0;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}