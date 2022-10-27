#include<bits/stdc++.h>
using namespace std;




int main(){
    int tt; //
    cin >>tt; 
    while(tt--){
        string s,ss; 
        cin >>s; 
        
        int size = s.length();
        cout<<s[0]<<s[1];
        for (int i = 3; i < s.size(); i += 2) {
            cout << s[i];
        }
        cout<<endl;
        
    }
}