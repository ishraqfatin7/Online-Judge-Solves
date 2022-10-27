#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >>t; 
    while(t--){
        int n; 
        cin >>n; 
        ll arr[n+1]; 
        ll arr1[n+1];
        for(int i =1;i<=n;i++){
            cin >> arr[i];
        }
        for(int i =1;i<=n;i++){
            cin >> arr1[i];
        }
        ll ans = 0;
        for(int i =2;i<=n;i++){
            ans += min(abs(arr[i] - arr[i - 1]) + abs(arr1[i] - arr1[i - 1]), abs(arr[i] - arr1[i - 1]) + abs(arr1[i] - arr[i - 1]));
        }
        cout<<ans<<endl;
    }
}