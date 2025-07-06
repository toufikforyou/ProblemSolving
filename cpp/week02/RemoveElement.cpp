#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());

        sort(nums.begin(), nums.end());

        return nums.size();
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int newSize = solution.removeElement(nums, val);
    cout << "New size of the array: " << newSize << endl;
    return 0;
}
