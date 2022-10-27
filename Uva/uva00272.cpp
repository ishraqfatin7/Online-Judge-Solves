#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   // string s;
    char ch;
   // int i = 0;
    int count = 0;
    //vector<string> quotes;
   // bool first = true;
    while (scanf("%c",&ch)==1)
    {
        if (ch== '"')
        {
            count++;
            if (count % 2 == 1)
            {
                cout << "``";
                continue;
            }
            else if (count % 2 == 0)
            {
                cout << "''";
                continue;
            }
        }
        cout << ch;
        
    }

   
}