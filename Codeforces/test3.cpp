#include <iostream>
#include <cstring>

using namespace std;

const int N = 55;
const int MOD = 1e9 + 7;

int n, i, j, x, y;
int F[N][N][N][2];

int main()
{
    cin >> n >> i >> j >> x >> y;

    // Initialize the base cases
    for (int k = 1; k <= n; k++)
    {
        F[1][1][k][0] = 1;
        F[1][1][k][1] = 1;
    }

    // Fill out the table using dynamic programming
    for (int len = 2; len <= n; len++)
    {
        for (int pos = 1; pos <= len; pos++)
        {
            for (int val = 1; val <= n; val++)
            {
                for (int inc = 0; inc <= 1; inc++)
                {
                    if (inc == 0)
                    {
                        // Add a smaller number before pos
                        for (int l = 1; l < val; l++)
                        {
                            F[len][pos][val][0] = (F[len][pos][val][0] + F[len - 1][pos - 1][l][0]) % MOD;
                        }
                        // Add a larger number after pos
                        for (int l = val + 1; l <= n; l++)
                        {
                            F[len][pos][val][0] = (F[len][pos][val][0] + F[len - 1][pos][l][1]) % MOD;
                        }
                    }
                    else
                    {
                        // Add a larger number after pos
                        for (int l = val + 1; l <= n; l++)
                        {
                            F[len][pos][val][1] = (F[len][pos][val][1] + F[len - 1][pos][l][1]) % MOD;
                        }
                        // Add a smaller number before pos
                        for (int l = 1; l < val; l++)
                        {
                            F[len][pos][val][1] = (F[len][pos][val][1] + F[len - 1][pos + 1][l][0]) % MOD;
                        }
                    }
                }
            }
        }
    }

    // Find the number of bitonic permutations
    int ans = 0;
    for (int inc = 0; inc <= 1; inc++)
    {
        ans = (ans + F[n][i][x][inc]) % MOD;
    }

    cout << ans << endl;

    return 0;
}
