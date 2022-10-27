#include <bits/stdc++.h>
using ull = unsigned long long;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;

void solve(int t)
{
    int n;
    cin >> n;
    double sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = sum / n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
        {
            count++;
        }
    }
    // cout << avg << " ";
    // cout << count << " " << (double)count / n << endl;
    printf("%.3lf%\n", (double)count / n * 100);
    // cout << "%" << endl;
}

int main()
{
    FAST;
    int tt;
    cin >> tt;
    cin.ignore();
    for (int i = 1; i <= tt; i++)
    {
        solve(i);
    }
}
