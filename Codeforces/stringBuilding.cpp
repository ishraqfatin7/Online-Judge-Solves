#include<bits/stdc++.h>
using namespace std; 
using ll = long long;

#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

void solve(){
    string s;
    cin >>s; 
    bool f = true; 
    int size = s.length(); 
    for(int i = 0; i < size;i++){
        if(s[i]!=s[i-1]&& s[i]!=s[i+1]){
            f = false;
            break;
        }
    }
    if(f){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
}

int main(){
    FAST;
    int tt;cin >>tt; 
    while(tt--){
        solve();
    }
}