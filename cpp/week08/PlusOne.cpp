#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> input = {1, 2, 3};

    vector<int> d = s.plusOne(input);

    cout << "[";
    for (int x : d)
    {
        if (x != d.back())
        {
            cout << x << ",";
        }
        else
        {
            cout << x;
        }
    }
    cout << "]";

    return 0;
}