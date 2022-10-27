#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    string newString;

    int length = (int) s.size();
    if (length%2!=0)
    {
        cout <<"NO"<<endl;
    }
    else{
        int remainder = length/2;
        string result = "YES";
        for (int i = 0; i < remainder; i++)
        {
            if (s[i]!=s[remainder+i]){
                result ="NO";
                break;
            }
        }
         cout <<result<<endl;
    }
    
   
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}