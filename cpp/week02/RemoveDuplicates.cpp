#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size();) {
                if (nums[j] == nums[i]) {
                    nums.erase(nums.begin() + j);
                } else {
                    j++;
                }
            }
        }

        return nums.size();
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2};
    int newSize = solution.removeDuplicates(nums);
    cout << "New size of the array: " << newSize << endl;
    return 0;
}
