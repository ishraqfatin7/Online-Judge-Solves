// #include<bits/stdc++.h>
// using namespace std;

// void solve(){

// }

// int main(){

//     int tt;cin >>tt;
//     while(tt--){
//         solve();
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 0;
    cin >> a >> b;

    while (b--)
    {
        i = 0;
        while (i <= a)
        {
            int x = i;
            while (x--)
            {
                cout << i;
            }
            cout << endl;
            i++;
        }
        i = i - 1;
        while (i--)
        {
            int x = i;
            while (x--)
                {
                    cout << i;
                }
            cout << endl;
        }
    }
}
