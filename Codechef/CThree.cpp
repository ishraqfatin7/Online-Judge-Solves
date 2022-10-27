#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
using ull = unsigned long long;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);

vector<ll>divisiors;

void solve() {

    ll n,a,b,c, count =0; 
    cin >>n>>a>>b>>c; 
    for(int i =1;i*i<=n;i++){
        if(n%i ==0){
            divisiors.push_back(i); 
            if(i!=n/i)divisiors.push_back(n/i);
        }
    }
    for(int i =0;i<divisiors.size();i++){
        for(int j =0;j<divisiors.size();j++){
            if(divisiors[i] <= a && divisiors[j] <= b && !(n % (divisiors[i] * divisiors[j])) && (n / (divisiors[i] * divisiors[j])) <= c) {
                s++;
            }
        }
    }
    cout<<count<<"\n";
}


int main(){
    FAST;
    int tt; cin >>tt; 
    while(tt--){
        solve();
    }
}