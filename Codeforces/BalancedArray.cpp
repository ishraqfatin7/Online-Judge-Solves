#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >>tt;
    while(tt--){
        int n;
        cin >>n; 
        if(n%4!=0){
            cout<<"NO"<<"\n"; 
            continue;
        }
        cout<<"YES"<<"\n";
        int sum1=0,sum2=0;
        int l =2;
       for(int i =1;i<=n/2;i++,l+=2){
           cout<<l<<" ";
           sum1+=l;
       }
       int j =1; 
       for(int i =1;i<=n/2-1;i++,j+=2){
           cout<<j<<" ";
           sum2+=j;
       }
       cout<<sum1-sum2<<endl;
    }
}