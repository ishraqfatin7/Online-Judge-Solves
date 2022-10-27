#include <bits/stdc++.h>
using namespace std;

void PRINT(string s,int i )
{
    if(i < 0){
        return;
    }
    cout<<s[i-1];
    PRINT(s,i-1);
}
void PrintINT(int n)
{
    if(n == 0){
        return;
    }
    cout<<n%10;
    PrintINT(n/10);
}

int main()
{
    string s;
    int n; 
    cin >> s>>n;
    PRINT(s,s.size());
    cout<<endl;
    PrintINT(n);
}