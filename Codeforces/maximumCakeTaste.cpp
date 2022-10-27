#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
int main(){
    int tt; cin >>tt; 
    while(tt--){
        int n; 
        cin >>n; 
        ll arr[n+1];
        for(int i =0;i<n;i++){ 
            cin >>arr[i];
        }
        sort(arr,arr+n,greater<int>()); 
        cout<<arr[0]+arr[1]<<endl;
    }
}