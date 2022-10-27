#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
    bitset<64> bits(s);
    int number = bits.to_ulong();
    return number;
}
int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int num;
        cin >> num;

        string binary = bitset<64>(num).to_string();
        //  binary.erase(0, binary.find_first_not_of('0'));
        next_permutation(binary.begin(), binary.end());
        cout << "Case " << i << ": ";
        cout << binaryToDecimal(binary) << endl;
    }
}