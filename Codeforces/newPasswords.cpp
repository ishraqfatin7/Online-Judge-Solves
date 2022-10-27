#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s="abcdefghijklmnopqrstuvwxyz";

    string password;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        password+=s[i%k];
    }
    
    cout << password << endl;
}