#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
using ull = unsigned long long;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

int N, arr[37]; 
void solve() {
    string s;cin >>s; 
    int size = s.length(); 
    int sum =0;
    int sum1 =0;
    for(int i =0;i<3;i++){
        char ch  = s[i];
        int x = (int)ch; 
        sum+=x; 
    }
     for(int i =size-1;i>2;i--){
        char ch  = s[i];
        int x = (int)ch; 
        sum1+=x; 
    }
    if(sum == sum1)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}


int main(){
    FAST;
    int tt; cin >>tt; 
    while(tt--){
        solve();
    }
}