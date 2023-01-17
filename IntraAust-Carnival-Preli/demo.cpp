string s;
cin >> s;
int n = s.size();
reverse(all(s));
ll pos = 0;
ll cnt = 0;
rep(i, n)
{
    if (s[i] == '0')
    {
        cnt++;
    }
    else if (s[i] == '5')
    {
        pos = i;
        cnt++;
        break;
    }
    else
    {
        break;
    }
}
if (pos + 1 < n)
{
    if (s[pos + 1] == '2' || s[pos + 1] == '7')
    {
        cnt++;
    }
}
reverse(all(s));
set<char> st;
rep(i, n)
{
    st.insert(s[i]);
}
if (st.size() == 2 && st.count('5') && st.count('0'))
{
    cout << cnt + 1 << endl;
    return;
}
else
{
    if (cnt)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}