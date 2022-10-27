#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

void solve(){

};

int main()
{

    FAST;
    int n,k;
    string s,t;
    cin >> n >> k;
    cin >> s;
    for(int i =0;i<n;i++){
    
           for(int j =0;j<k;j++){
                t+=s[i];
           }
        
    }
   cout<<t<<endl;
}