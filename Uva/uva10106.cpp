#include <bits/stdc++.h>
using namespace std;
// implementation of addition

int charToDigit(char ch)
{
    return ch - '0';
}
char digitToChar(int digit)
{
    return digit + '0';
}
string addNumbers(string s1, string s2)
{

    if (s1.length() > s2.length())
    {
        swap(s1, s2);
    }
    string result = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int d1 = charToDigit(s1[i]);
        int d2 = charToDigit(s2[i]);
        int sum = d1 + d2 + carry;
        int output = sum % 10;
        carry = sum / 10;
        result.push_back(digitToChar(output));
    }
    for (int i = s1.length(); i < s2.length(); i++)
    {
        int d2 = charToDigit(s2[i]);
        int sum = d2 + carry;
        int output = sum % 10;
        carry = sum / 10;
        result.push_back(digitToChar(output));
    }
    // if a carry is generated after second step
    if (carry)
    {
        result.push_back('1');
    }
    reverse(result.begin(), result.end());

    return result;
}
string multiplyNumbers(string s1, string s2)
{
    if (!s1.length() || !s2.length())
    {
        return "0";
    }
    string result = "";
    vector<int> res(s1.length() + s2.length(), 0);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    //    int carry = 0;
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int carry = 0;
        int n1 = charToDigit(s1[i]);
        i_n2 = 0;
        for (int j = 0; j < s2.length(); j++)
        {
            int n2 = charToDigit(s2[j]);
            int sum = n1 * n2 + res[i_n1 + i_n2] + carry;
            carry = sum / 10;
            res[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
        {
            res[i_n1 + i_n2] += carry;
            i_n1++;
        }
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;
    if (i == -1)
        return "0";
    string s = "";
    while (i >= 0)
    {
        s += to_string(result[i--]);
    }
    // reverse(result.begin(), result.end());

    return s;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string result = multiplyNumbers(s1, s2);
    cout << result << endl;
}