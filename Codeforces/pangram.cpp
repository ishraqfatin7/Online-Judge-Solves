#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sl;
    int n;
    cin >> n;
    cin >> sl;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    bool isPangram = false;
    set<char> str;
    for (int i = 0; i < sl.length(); i++)
    {
        str.insert(sl[i]);
    }
    if (str.size()==26)
    {
        cout << "YES"<<endl;
    }else cout << "NO"<<endl;
    
}