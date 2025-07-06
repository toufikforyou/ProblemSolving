#include <iostream>
#include <algorithm>

long long count_shashliks(long long initial_k, long long required_temp, long long drop_amount)
{
    if (initial_k < required_temp)
    {
        return 0;
    }
    return (initial_k - required_temp) / drop_amount + 1;
}

void solve()
{
    long long k, a, b, x, y;
    std::cin >> k >> a >> b >> x >> y;

    long long ans = 0;

    long long current_k_s1 = k;
    long long cooked_s1 = 0;

    long long num1_s1 = count_shashliks(current_k_s1, a, x);
    cooked_s1 += num1_s1;
    current_k_s1 -= num1_s1 * x;

    long long num2_s1 = count_shashliks(current_k_s1, b, y);
    cooked_s1 += num2_s1;

    ans = std::max(ans, cooked_s1);

    long long current_k_s2 = k;
    long long cooked_s2 = 0;

    long long num2_s2 = count_shashliks(current_k_s2, b, y);
    cooked_s2 += num2_s2;
    current_k_s2 -= num2_s2 * y;

    long long num1_s2 = count_shashliks(current_k_s2, a, x);
    cooked_s2 += num1_s2;

    ans = std::max(ans, cooked_s2);

    std::cout << ans << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}