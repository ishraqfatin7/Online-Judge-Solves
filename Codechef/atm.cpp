#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; //
    cin >>tt; 
    while(tt--){
        int n,k;
        cin >>n >>k;
        for(int i =0;i<n;i++){
            int x;
            cin >>x; 
            if(x>k){
                cout<<'0';
            }
            else{
                k-=x;
                cout<<'1';
            }
        }
        cout<<endl;
    }
}