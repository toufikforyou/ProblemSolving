#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int n, K;
        cin >> n >> K;

        vector<int> coins(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> coins[i];
        }

        vector<vector<int>> dp(n + 1, vector<int>(K + 1, -1));
        dp[0][0] = 1;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j <= K; ++j)
            {
                if (dp[i][j] != -1)
                {
                    dp[i + 1][j] = 1;
                    if (j + coins[i] <= K)
                        dp[i + 1][j + coins[i]] = 1;
                    if (j + 2 * coins[i] <= K)
                        dp[i + 1][j + 2 * coins[i]] = 1;
                }
            }
        }

        if (dp[n][K] != -1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}