#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> allowed = {'(', ')', '{', '}', '[', ']'};
        stack<char> st;

        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false;
                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '['))
                {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution s = Solution();

    cout << s.isValid("()[]{}");

    return 0;
}