#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int num[25];
    char arr[100][100];
    bool last = false;
    bool first = false;  
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if(i%2 ==1){
                arr[i][j]='#';
            }
            else if(i%4==2 && j ==m ){
                arr[i][j]='#';
               // last = true;
               
            }
            else if(i%4==0 && j ==1 ){
               // first = true;
               // last = false; 
                arr[i][j]='#';
            }
            else{
                 arr[i][j]='.';
            }
        }
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}