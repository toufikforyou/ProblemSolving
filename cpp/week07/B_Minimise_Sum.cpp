// Time error

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> pmin(n), prefixSum(n + 1, 0);
        pmin[0] = a[0];
        for (int i = 1; i < n; i++)
            pmin[i] = min(pmin[i - 1], a[i]);
        for (int i = 1; i <= n; i++)
            prefixSum[i] = prefixSum[i - 1] + pmin[i - 1];

        long long ans = prefixSum[n];

        for (int j = 1; j < n; j++)
        {
            for (int i = 0; i < j; i++)
            {
                long long ai_prime = a[i] + a[j];
                long long left_min = (i == 0) ? LLONG_MAX : pmin[i - 1];
                left_min = (i == 0) ? LLONG_MAX : pmin[i - 1];
                long long val = min(left_min, ai_prime);
                long long cur_sum = prefixSum[i] + val * (j - i) + 0 * (n - j - 1 + 1);
                ans = min(ans, cur_sum);
            }
        }
        cout << ans << endl;
    }

    return 0;
}