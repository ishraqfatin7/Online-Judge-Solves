#include <bits/stdc++.h>
using namespace std;

int STRLEN(string s, int i)
{
    if(s[i]=='\0'){
        return i; 
    }
    return STRLEN(s,i+1);
}

bool STRCMP(string s1, string s2, int i)
{
    if(s1[i] == '\0' && s2[i] == '\0'){
        return true;
    }
    if(s1[i] != s2[i]){
        return false;
    }
    return STRCMP(s1,s2,i+1);
}

string STRACPY(string s1, string s2, int i)
{
    if(s1[i] == '\0'){
        return s2;
    }
    s2[i] = s1[i];
    return STRACPY(s1,s2,i+1);

}

int main()
{
    string s,s1;cin >>s>>s1; 
    cout << STRLEN(s, 0)<<endl;
    cout << STRCMP(s,s1,0);
    string s2 = STRACPY(s,s1,0);
    cout<<s2;

}