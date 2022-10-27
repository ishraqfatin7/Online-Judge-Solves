#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,org;
    cin >> s; //
    string d = "WUB";
    int i =0; 
    while(i<s.length())
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2] =='B'){
            i+=3;
            org+=" ";
        }
        else{
            org+=s[i];
            i++;
        }
       // org+=" ";
    }
    string f ; 
    for(int j =0; j<org.length();j++){
        if(org[j]==' ' && org[j+1]==' '){
            continue;
        }
        else{
            f+=org[j];
        }
    }
    cout<<f<<endl;
}