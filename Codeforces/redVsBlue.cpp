#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        int mid = n / (b + 1);
        int rem  = n % (b + 1);
        while (n--)
        {
            for(int i = 0;i<mid;i++){
                cout<<"R";
                r--;
            }
            if (b)
            {
                b--;
                cout << "B";
                mid = n / (b + 1);
            }
        }
        cout << endl;
    }
}