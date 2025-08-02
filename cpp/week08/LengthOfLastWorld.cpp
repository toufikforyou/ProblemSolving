#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        int i = s.length() - 1;

        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }

        while (i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }

        return length;
    }
};

int main()
{
    Solution s = Solution();

    cout << s.lengthOfLastWord("   fly me   to   the moon  ");

    return 0;
}