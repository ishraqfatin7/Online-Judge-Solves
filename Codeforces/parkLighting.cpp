#include<bits/stdc++.h>
using namespace std; 

int main() {
    int tt;cin >>tt; 
    while (tt--){
        int n,m;
        cin >>n>>m;
        long long size = n*m; 
        if (size%2 ==0)
        {
            cout <<size/2<<endl;
        }
        else{
            cout<<size/2+1<<endl;
        }
        
    }
}