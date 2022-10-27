#include<bits/stdc++.h>
using namespace std; 
using ll = long long;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

void solve(){
    int n; cin >>n; 
    if(n>1600 && n>=1900){
        cout<<"Division 1"<<endl;
    }
    else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
    }
    else if (n<=1599 && n>=1400){
        cout<<"Division 3"<<endl;
    }
    else if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    
}

int main(){
    FAST;
    int tt;cin >>tt; 
    while(tt--){
        solve();
    }
}