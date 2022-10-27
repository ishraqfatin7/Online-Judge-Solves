#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int test, t = 1;
    cin >> test;
    while (test--)
    {
        printf("Case %d:\n", t++);
        string str, x, temp, y;
        stack<string> s1;
        stack<string> s2;
        x = "http://www.lightoj.com/";

        s1.push(x);
        while (cin >> y)
        {

            if (y == "QUIT")
                break;

            if (y == "VISIT")
            {
                cin >> x;
                cout << x << endl;
                s1.push(x);
                if (!s2.empty())
                {
                    while (!s2.empty())
                        s2.pop();
                }
            }
            else
            {
                if (y == "BACK")
                {
                    temp = s1.top();
                    s2.push(temp);
                    s1.pop();
                    if (!s1.empty())
                    {
                        cout << s1.top() << endl;
                    }
                    else
                    {
                        cout << "Ignored" << endl;
                        temp = s2.top();
                        s1.push(temp);
                        s2.pop();
                    }
                }
                else if (y == "FORWARD")
                {
                    if (!s2.empty())
                    {
                        cout << s2.top() << endl;
                        temp = s2.top();
                        s1.push(temp);
                        s2.pop();
                    }
                    else
                    {
                        cout << "Ignored" << endl;
                    }
                }
            }
        }
    }

    return 0;
}