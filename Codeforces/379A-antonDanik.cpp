#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n; 
    string s; 
    cin >>n>>s; 
    int aCount =0; 
    int Dcount =0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] =='A')
        {
            aCount++;
        }
        else{
            Dcount++;
        }
        
    }
    if (aCount>Dcount)
    {
        cout<< "Anton"<<endl;
    }
    else if (aCount<Dcount)
    {
        cout <<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
        
    

}