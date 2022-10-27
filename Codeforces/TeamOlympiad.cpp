#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> students;
    int pc = 0, mc = 0, pec = 0;
    while (n--)
    {
        
        int x;
        cin >> x;
        students.push_back(x);
    }
   
    int p[5000],m[5000],pe[5000];
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i]==1)
        {
            p[pc] = i+1;
            pc++;
        }
        if (students[i]==2)
        {
            m[mc] = i+1;
            mc++;
        }
        if (students[i]==3)
        {
            pe[pec] = i+1;
            pec++;
        }
    }
    int x = min(pc,mc);
    int teams = min(x,pec);

    cout << teams << endl;
    int j=0,k=0,l=0;
    for (int i = 0; i <teams; i++)
    {   
        cout <<p[j++]<<" "<<m[k++]<<" "<<pe[l++]<<endl;
    }
    
    
}