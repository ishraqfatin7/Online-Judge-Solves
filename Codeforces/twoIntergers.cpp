#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    ll tt; 
    cin >>tt; 
    while(tt--){
        ll a,b; 
        cin >>a>>b; 
        ll sum = abs(a-b);
        ll s = sum;
        ll count =0;
        while(sum>=10){
            sum-=10;
            count++;
        }
       // cout<<sum<<endl;
       if(sum==0 ){
            cout<<count<<endl;
       }
       else{
            cout<<count+1<<endl;
       }
    }
}