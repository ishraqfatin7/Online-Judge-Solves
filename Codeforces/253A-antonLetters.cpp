#include<bits/stdc++.h>
using namespace std; 

int main(){
    char x;
    vector<char>letters; 
    while(x!='}'){
        cin >>x;
        if (x>='a' && x<='z')
        {
            letters.push_back(x);
        }
    }
    set<char> s(letters.begin(), letters.end());
    cout <<s.size()<<endl;
}