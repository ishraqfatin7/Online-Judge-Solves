#include <bits/stdc++.h>
using namespace std;
// char arr[30] ={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','?'};
// int findChar(char c){
//     for (int i = 0; i < 30; i++)
//     {
//         if(arr[i] == c){
//             return i;
//         }
//     }
//     return -1;

// }

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // char arr[30] ={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','?'};
    string keyboard("qwertyuiopasdfghjkl;zxcvbnm,./");
    char pos;
    string s, org;
    int id;
    cin >> pos >> s;

    if (pos == 'R')
    {
        for (int i = 0; i < s.length(); i++)
        {
            id = keyboard.find(s[i]);
            cout << keyboard[id - 1];
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            id = keyboard.find(s[i]);
            cout << keyboard[id + 1];
        }
    }

    cout << endl;
}