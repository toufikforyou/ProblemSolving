#include <iostream>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        size_t pos = haystack.find(needle);
        return (pos != -1) ? pos : -1;
    }
};

int main()
{
    Solution s = Solution();

    cout << s.strStr("sadbutsad", "sad");

    return 0;
}