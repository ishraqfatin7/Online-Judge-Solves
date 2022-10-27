#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int tt;cin >>tt;
   while(tt--){
        ll a,b; 
    cin >> a >> b;
    ll sum1 = b*2; 
    if(a ==0){
        cout<<1<<endl;
        
    }
    else{
        cout << (sum1+a)+1 <<endl;
    }
   }
}