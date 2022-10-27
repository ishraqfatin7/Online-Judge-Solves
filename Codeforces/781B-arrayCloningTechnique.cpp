#include<bits/stdc++.h>
using namespace std;
using ll = long long ; 
int main(){
    int tt; cin >>tt; 
    while(tt--){
        int n;
        cin >>n; 
        ll arr[n]; 
        for(int i = 0; i < n; i++){
            cin >>arr[i]; 
        }
        sort(arr,arr+n); 
        int count = 1;
        int maxF = 1;
        for(int i = 1; i < n; i++){
            if(arr[i-1] ==arr[i]){
                count++; 
            }
            else count =1;
            maxF = max(count,maxF);
        }
        ll ans =0;
        while(maxF<n){
            if(2*maxF>n){
                ans++;
                ans+=n-maxF;
                maxF=n; 
            }
            else {
                ans++; 
                ans+=maxF;
                maxF*=2;
            }
        }
        cout<<ans<<endl;
    }
}