#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin >>s;
    sort(s.begin(),s.end());
    string newString;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='+')
        {
            newString+=s[i];
        }
        
    }
    
    for (int i = 0; i < newString.length()-1; i++)
    {
        cout<<newString[i]<<'+';
    }
    cout<<newString[newString.length()-1];
}