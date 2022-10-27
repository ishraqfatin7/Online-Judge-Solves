#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >>s; 
    string msg;
    queue<char>ss; 
    for(int i =0;i<s.length();i++){
       ss.push(s[i]);
    }
    while(!ss.empty()){
        char a,b; 
        a = ss.front();
        ss.pop();
        b = ss.front();
       
        if(a =='.' && b == '-' || a=='.' && ss.empty() || a =='.' && b=='.'){
            msg+='0';
           
        }
        if(a == '-' && b == '.'){
            msg+='1';
            ss.pop();
            
        }
        if(a == '-' && b == '-'){
            msg+='2';
            ss.pop();
            
        }
    }
    cout << msg << endl;
}