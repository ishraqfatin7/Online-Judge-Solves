#include <bits/stdc++.h>
using namespace std;

void solve()
{

}

int main()
{
    int n,m; cin >> n >> m;
    map<string,pair<int,int>>mp; 
    for(int i = 0; i < n; i++){
        string s;cin >>s;
        int r, point; 
        cin >>r>>point;
        mp[s] = make_pair(r,point);
    }
    

}