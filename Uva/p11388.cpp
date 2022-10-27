#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >>tt; 
    while(tt--){
        int g,l ,x,y; 
        cin >>g >>l;
        if(l%g!=0){
            cout<<-1<<endl;
            continue;
        }
        cout<<g<<" "<<l<<endl;

    }
}