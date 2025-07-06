#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                index = i;
                break;
            } else {
                index = i + 1;
            }
        }
        return index;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int index = solution.searchInsert(nums, target);
    cout << "Index to insert target: " << index << endl;

    return 0;
}