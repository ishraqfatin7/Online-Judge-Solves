#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);

int main()
{
    FAST;
    int n, amp, freq;
    cin >> n;
    while (n--)
    {
        cin >> amp >> freq;
        int k ;
        for (k = 1; k <=freq; k++)
        {
            for (int i = 1; i <= amp; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }

            for (int i = amp - 1; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            if(k!=freq){
                cout<<endl;
            }
        }
        if (n>0)
        {
            cout << endl;
        }
    }
}