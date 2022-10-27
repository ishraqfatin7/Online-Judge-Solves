#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin >>s; 
    string ss = s; 
    while(true){
        reverse(s.begin(),s.end());
        for(int i = 0; i < ss.size(); i++){
            int x = s[i] -'0';
            int y = ss[i] -'0';
        }
    }
}

int main(){
    int tt;cin >>tt; 
    while(tt--){
        solve();
    }
}