#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
using ll = long long;
const int N = 1e6 + 9;

int mark[N];

void sqn()
{
    mark[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        mark[i] = i * i;
    }
}

int main()
{
    // sqn();
    int a, b, c;
    //  cin >> a >> b;
    while (cin >> a >> b)
    {
        if (!a && !b)
            return 0;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            c = sqrt(i);
            if (c * c == i)
                count++;
        }
        cout << count << "\n";
    }
}