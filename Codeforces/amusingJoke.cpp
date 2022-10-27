#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string host,guest, s; 
    string newS; 
    cin >>host>>guest>>s;
    newS = host+guest; 
    sort(newS.begin(), newS.end());
    sort(s.begin(), s.end());
    if(newS==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
