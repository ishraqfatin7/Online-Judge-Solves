#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() 
{ 
    ll n; 
    cin>>n; 
    ll arr[n+1]; 
    for(int i=0;i<n;i++) 
    { 
        cin>>arr[i]; 
    } 
 
    if(n==1 && arr[0]>1) 
    { 
        cout<<"NO"<<endl; 
        return; 
    } 
 
    sort(arr,arr+n,greater<ll>()); 
 
    for(int i=1;i<n;i++) 
    { 
        if(arr[i-1]-arr[i]>1) 
        { 
            cout<<"NO"<<endl; 
            return; 
        } 
        arr[i]=arr[i-1]-arr[i]; 
    } 
    cout<<"YES"<<endl; 
} 
int main(){

    int tt;cin >>tt;
   while(tt--){
//     ll n;
//     cin >>n;
//     ll arr[n+1];
//     for(int i =0;i<n;i++){
//         cin >>arr[i];
//     }
//     sort(arr,arr+n); 
//     // for(int i =0;i<n;i++){
//     //     arr[i] =arr[i]/2; 
//     // }
//     bool f = false;
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             arr[j] =arr[j]%arr[i];
//         }
//     }
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // if(f){
//     //     cout<<"NO"<<endl;
//     // }
//     // else cout<<"YES"<<endl;
//    }
solve();
   }
}