#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m; 
    cin >>n>>m; 
    int arr[m];
    for(int i =0;i<m;i++){
        cin >>arr[i];
    }
    sort(arr,arr+m);
    int ans = INT_MAX;
    for(int i =0;i<=m-n;i++){
        ans = min(arr[i+n-1]-arr[i],ans);
    }
    cout<<ans<<endl;
}