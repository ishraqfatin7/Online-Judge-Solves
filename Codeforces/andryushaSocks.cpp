#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>socks;
    int n; cin>>n; 
    int count =0;
    int maxC = -10000;
    for(int i =0;i<2*n;i++){
        int x; cin>>x;
        if(socks.count(x)==0){
            
            count++;  
            
        }
        else{
            count--;
        }
        maxC =max(maxC,count);     
        socks.insert(x);
       

    }
    cout<<maxC<<endl;
    

}