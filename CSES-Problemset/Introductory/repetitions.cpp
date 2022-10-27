#include <bits/stdc++.h>
using namespace std;
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using ll = long long;

int32_t main()
{
    Fast;
    int arr[4] = {0};
    string s;
    cin >> s;
    char ch = s[0];
    int size = s.size();
    int count = 1;
    int maxC =1;
    for (int i = 1; i < size; i++)
    {
        if (s[i] != ch)
        {
            count = 0;
            ch = s[i];
        }
        count++;
        maxC = max(count, maxC);
    }

    cout << maxC << endl;
}