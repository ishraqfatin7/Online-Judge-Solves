#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string ss; 
    for(int i=0;i<s.length();i++) {
        if (s[i] =='A'||s[i] == 'O' ||s[i] == 'E' ||s[i] == 'Y' ||s[i] == 'I' ||s[i] == 'U'){
            continue;
        }
        if (s[i] =='a'||s[i] == 'o' ||s[i] == 'e' ||s[i] == 'y' ||s[i] == 'i' ||s[i] == 'u'){
            continue;
        }
        else {
            ss+='.';
            if(s[i]<97){
                ss+=s[i]+32;
            }
            else ss+=s[i];
        }
    }
    cout<<ss<<endl;
}