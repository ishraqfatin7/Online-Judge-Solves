#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, i, n, j;
    while (scanf("%d", &n) != EOF)

        getchar();
    for (i = 1; i <= n; i++)
    {
        string str;
        stack<char> s;
        getline(cin, str);
        int flag = 0;
        for (j = 0; j < str.size(); j++)
        {
            if (str[j] == '(' || str[j] == '[')
            {
                s.push(str[j]);
            }
            else if (((!s.empty()) && (s.top() == '(')) && (str[j] == ')'))
            {
                s.pop();
            }
            else if (((!s.empty()) && (s.top() == '[')) && (str[j] == ']'))
            {
                s.pop();
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1 || s.size() >= 1)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
