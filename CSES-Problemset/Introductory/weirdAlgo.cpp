#include <bits/stdc++.h>
using namespace std;
#define Fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);
using ll = long long;

int32_t main()
{
	Fast;
	long long int n;
	cin >> n;
	cout<<n<<" ";
	while (n!=1)
	{
	
		if (n & 1)
		{
			n = (3 * n) + 1;
		}
		else{
			n>>=1;
		} 
			cout << n << " ";	
	}
	return 0;
}