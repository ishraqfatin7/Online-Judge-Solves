#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve()
{
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sq[4] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        sq[0] = true;

        for (int j = 3; j >= 0; j--)
        {
            if (j + arr[i] > 3 && sq[j] == true)
            {
                count++;
                sq[j] = false;
            }
            else if (sq[j] == true)
            {
                sq[j + arr[i]] = true;
                sq[j] = false;
            }
        }
    }
    cout << count << endl;
}
