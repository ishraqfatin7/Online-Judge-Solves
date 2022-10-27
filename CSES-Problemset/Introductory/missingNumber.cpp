#include<bits/stdc++.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

const int F = 1e6+9; 

bool f[F];

int32_t main(){
    Fast; 
    int n; 
    cin >>n; 
    for(int i=1; i<=n; i++){
        int x; 
        cin >>x;
        f[x] = true;
    }
    for(int i=1; i<=n; i++){
        if(!f[i]){
            cout<<i<<endl; 
            break;
        }
    }
}