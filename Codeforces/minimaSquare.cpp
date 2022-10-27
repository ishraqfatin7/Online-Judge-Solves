#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >>tt; 
    while(tt--){
        int a,b;
        cin >>a >>b;
		int c = min(max(2 * a, b), max(a, 2 * b));
		cout << c * c << '\n';
    }
}