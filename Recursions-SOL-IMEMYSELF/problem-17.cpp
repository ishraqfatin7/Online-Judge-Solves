#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int n)
{
    if (i == n)
    {
        return true;
    }
    if ((s[i] > 'a' && s[i] < 'z' || s[i] > 'A' && s[i] < 'Z' || s[i] > '0' && s[i] < '9') && (s[n] > 'a' && s[n] < 'z' || s[n] > 'A' && s[n] < 'Z' || s[n] > '0' && s[n] < '9'))
    {
        if (s[i] != s[n])
        {
            return false;
        }
    }
    return checkPalindrome(s, i + 1, n - 1);
}

int main()
{
    string s;
    //cin >> s;
    getline(cin,s); 
    int i = 0;
    int n = s.size() - 1;
    // checkPalindrome(s, i, n);
    checkPalindrome(s, i, n) ? cout << "Palindrome" : cout << "Not Palindrome";
}