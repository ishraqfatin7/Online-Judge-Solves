#include <bits/stdc++.h>
using namespace std;

bool search(int i, string s, char c)
{
    for (int j = i; j < s.length(); j++)
    {
        if (c == s[j])
        {
            return true;
        }
    }
    return false;
}

void solve(){
      int n;
        cin >> n;
        string s;
        cin >> s;
        string newS = s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
        for(int i =0;i<n;i++){
            int check = 0;
            for(int j =i+1;j<n;j++){
                if(s[i]!=s[j]){
                    check = 1;
                }
                if(check && s[i])
            }
        }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
      solve();
    }
}