#include<bits/stdc++.h>
using namespace std; 

int main() {

    string s; 
    cin >> s; 
    int count = 0;
    int pos =97;
    int round =0;
    for (int i = 0; i < s.length(); i++)
    {
         count = abs(pos-s[i]);
        if(count>13){
            count =26-count;
        }
        round+=count; 
        pos =s[i];
       
    }
    cout << round << endl;
    


}