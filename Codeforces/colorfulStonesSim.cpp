#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; 
    cin >> s>> t;
    int count = 0;
    int tLength = t.length(); 
    int i =0,j=0;
    while(i<tLength){
        if (t[i] == s[j])
        {
            count =j;
            j++;
        }
        i++;
        
    }
    cout << j+1;
}